import os
import numpy as np
import matplotlib.pyplot as plt
import wx
import wx.lib.plot.polyobjects as po
import wx.lib.agw.aui as aui
import wx.lib.mixins.inspection as wit
from wx.lib.masked import NumCtrl
import matplotlib as mpl
from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigureCanvas
from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar
import wx.lib.agw.multidirdialog as MDD
import wx.lib.inspection
from read_data import read_data
import pandas as pd
import wx.richtext as rt
import time


## Main script that runs the GUI program for HEPPDAP. Upon initial run, the app object is created
## (MainApp) which inherits from wx.App class. Within the app, the main frame is created (MainFrame)
## which inherits from wx.Frame class. The app is the entire program while the frame represents the
## window in which things can be placed. MainFram has two children: apanel ("a" standing for analysis), which 
## holds the PlotNoteBook object. This PlotNoteBook takes up the entire right hand side of the frame (window)
## it has a method called "add" which allows additional plots to be added as additional pages to the PlotNoteBook.
## The other child is the panel, this can be thought of as the actual control panel as it holds all the buttons and
## inputs that allow the user to run the program and plot data. All controls are decendants of this class
## User selects file using the browse button, once analyze is clicked, the read_data method is run. This takes
## the raw data, unpacks it and returns an array that indexes the evetns as followed: 
## event = read_data("file.dat")[event_number][channel_index] where event is a pandas array that contains the 
## voltages and times. This allows for easy plotting as pandas and matplotlib work well with eachother
## This program reads the output of read_data and interates through the first event of each channel.
## If data is detected in the array, the associated channel index is added to a list of "active channels"
## This is just a way for the program to know which channels have data and which ones do not. For example,
## if channel 1 had data, channel 2 did not have data and channel 3 had data and all data came from myfile.dat,
## read_data("myfile.dat")[0][0] and read_data("myfile.dat")[0][2] would have data while read_data("myfile.dat)[0][1]
## would be an empty array. This is done so that the user can only select from channels that actually have data.
## In other words, buttons/settings for all channels will always be created for each file run, however, if a channel does
## not have data in it, the program will hide all controls that interact with that channel so that the user is not able 
## is access controls that correspond to an empty channel
## User can filter (or apply post-analysis triggers) such as specifcying a minimum amplitude of each channel and 
## maxmimum timing difference between 2 channels. All filtration parameters use "AND" logic. Once the user specifies
## filtration parameters, the program iterates through each event for each selected channel. If the first criterion
## is satisfied, the next criterion is evaluated, this continues until one of two things happen:
## 1) The event fails to meet the required criterion:
##    Program will then go to the next event and restart the filtration process
## 2) All criterion are passed:
##    Program plots the event with the selected channels
## If the user is viewing the most recently generated plot, upon clicking the "Next" button, 
## the next event (that satisfies all (if any) filtration criterion) is plotted. The program knows if the user is 
## on the last page (i.e. most recently plotted event) by getting the index of the page and comparing it to the total
## number of pages in the PlotNoteBook. If the user is viewing an event that is not the last, the "Next" button will 
## simply advance the tab (page) to the next plot that has already been generated. The "Previous" button always returns the plot to
## the previous tab, no matter where the user is (unless, of course, the user is viewing the first tab (event) plotted).
## If the user wants to analyze a new file, he/she must simply click "Browse", select the new file, and click "Analyze" 
## THe "Analyze" button can be thought of as a 'reset button', upon being clicked it will clear the entire PlotNoteBook and 
## reset all indexes being used by the program to 0. It basically starts the program from the beginning.


#All characteristics (i.e. rise time, fall time, amplitude, etc) are obtained from using the methdod calc_stats() in read_data()
## Returns associated array that is indexed by [channel_number][characteristic][event_number], the PlotNoteBook has a "on_tab_changed" event 
## listener that is always running. It will update the displayed characteristics based on the currenlty viewed page in the PlotNoteBook
## THis program makes extensive use of numpy, matplotlib and wxPython, before really digging deep into this code, it is
## highly recommended that a working knowledge of matplotlib and wxPython (especially) is gained.





class MainApp(wx.App):
    #Initialize the app    
    def __init__(self):
        super().__init__(clearSigInt=True)

    #init frame
        frame = MainFrame()
        frame.SetSize(1000,800)
        frame.Show()


class MainFrame(wx.Frame):
    def __init__(self, title="Python Data Analysis", pos=(100,100)):
        super().__init__(None, title=title, pos=pos)
        #initilize frame
       
        self.InitFrame()

    def InitFrame(self):
        menubar = wx.MenuBar()
        fileMenu = wx.Menu() 
        # Make sizer and add panels to sizer to for auto-resizing
        sizer=wx.BoxSizer(wx.HORIZONTAL)
        self.apanel = PlotNotebook(self, id=-1, pos=(100,100), size=(300,300))
        self.panel = MainPanel(self, id=wx.ID_ANY, pos=(0,100), size=(100,100))
        sizer.Add(self.panel, 1, wx.EXPAND|wx.ALL, 5)

        #Build Menu
        oid = wx.NewId()
        aid = wx.NewId()
        #Open Option Under File
        openitem = fileMenu.Append(wx.ID_ANY, "Open\tCtrl+O", "Open") 
        #Bind Item
        self.Bind(wx.EVT_MENU, self.panel.onOpenFile, openitem)
        #Bind Keyboard Shortcut
        self.Bind(wx.EVT_MENU, self.panel.onOpenFile, id=oid)
        #Analyze Item
        analyzeitem = fileMenu.Append(wx.ID_ANY, "Analyze\tReturn", "Analyze")
        #Bind Item
        self.Bind(wx.EVT_MENU, self.panel.analyze, analyzeitem)
        #Bind Keyboard Shortcut
        self.Bind(wx.EVT_MENU, self.panel.analyze, id=aid)

        menubar.Append(fileMenu, '&File')
        self.SetMenuBar(menubar)
        sizer.Add(self.apanel, 3, wx.ALIGN_TOP|wx.EXPAND, 0)
        self.accel_tbl = wx.AcceleratorTable([(wx.ACCEL_CTRL, ord('O'), oid)])
        self.SetAcceleratorTable(self.accel_tbl)
        self.SetSizer(sizer)






class PlotNotebook(wx.Panel):
    #This is the object that handles the plotting of data
    def __init__(self, parent, id, pos, size):
        wx.Panel.__init__(self, parent, id, pos, size)
        self.parent = parent
        atext = wx.StaticText(self, wx.ID_ANY, "Analysis Side")
        self.nb = aui.AuiNotebook(self)
        #Create binding so that charecteristics change when the tab is changed
        self.Bind(aui.EVT_AUINOTEBOOK_PAGE_CHANGED, self.on_nb_tab_changed, self.nb)
        sizer = wx.BoxSizer(wx.VERTICAL)
        sizer.Add(atext, 0, wx.TOP|wx.CENTER)
        sizer.Add(self.nb, 5, wx.TOP|wx.EXPAND)
        self.SetSizer(sizer)
     
    #Method to add a new tab (plot) to the notebook
    def add(self, name="plot"):
        #Get the actual plot
        page = Plot(self.nb)
        page.name=name
        # Add plot to the PloteNoteBook as an additional page
        self.nb.AddPage(page, name)
        return page.figure

    #Method called on tab changed event, will update characteristics
    def on_nb_tab_changed(self, event):
        mainpanel = self.parent.panel
        for board in mainpanel.channelmatrix:
            #Stats will only be displayed if one channel is checked off
            for channel in board:
                if channel.IsChecked():
                    bindex = board.index(channel)        

        #print("Channel: %s" % bindex)
        #Get index from the name of the current tab
        index = int(self.nb.GetCurrentPage().name.split()[1]) - 1
        mainpanel.index = index 
        #Grab characteristics from the data
        mainpanel.peaktimeval.SetLabel(str(mainpanel.data.stats['single_channel'][bindex]["peak_time"][index]))
#        mainpanel.risetimeval.SetLabel(str(mainpanel.data.stats['single_channel'][bindex]["rise_time"][index]))
        mainpanel.risetimeval.SetLabel(str(mainpanel.data.stats['single_channel'][bindex]["rise_time"][index]))
        mainpanel.amplitudeval.SetLabel(str(mainpanel.data.stats['single_channel'][bindex]["amplitude"][index]))


        #Refresh the mainpanel
        mainpanel.plotter.Layout()
       
class Plot(wx.Panel):
    #Builds the plot
    def __init__(self, parent, id=-1, dpi=None, **kwargs):
        wx.Panel.__init__(self, parent, id=id, **kwargs)
        self.figure = mpl.figure.Figure(dpi=dpi, figsize=(2, 2))
        self.canvas = FigureCanvas(self, -1, self.figure)
        self.toolbar = NavigationToolbar(self.canvas)
        self.toolbar.Realize()

        sizer = wx.BoxSizer(wx.VERTICAL)
        sizer.Add(self.canvas, 1, wx.EXPAND)
        sizer.Add(self.toolbar, 0, wx.LEFT | wx.EXPAND)
        self.SetSizer(sizer)

#Class to automate the creation of the widgets that allow post-analysis triggers to be implemented
class AmplitudeSelect():
    def __init__(self, parent, ampsizer, board):
        self.board = board
        self.parent = parent
        self.ampsizer = ampsizer

    def buildsizers(self):
        #Board title, i.e. "Board 1"
        boardtext = wx.StaticText(self.parent, id=wx.ID_ANY, label ="Board %d" % self.board)
        self.ampsizer.Add(boardtext, 0, wx.ALL|wx.ALIGN_CENTER, 0)
        channels = []
        for i in range(4):
            sizer = wx.BoxSizer(wx.HORIZONTAL)
            amp = wx.StaticText(self.parent, id=wx.ID_ANY, label="Channel %d Amplitude (mv): " % (i + 1))
            #SpinCtlr only accepts numerical inputs
            ampval = wx.SpinCtrl(self.parent, wx.ID_ANY)
            ampenable = wx.CheckBox(self.parent, id=wx.ID_ANY, label = "Enable")
            sizer.Add(amp, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN|wx.ALIGN_LEFT, 0)
            sizer.Add(ampval, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN|wx.ALIGN_CENTER, 0)
            sizer.Add(ampenable, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN|wx.ALIGN_RIGHT, 0)
            self.ampsizer.Add(sizer, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN|wx.ALIGN_LEFT,0)
            channels.append(sizer)

        return channels
        
class MainPanel(wx.Panel):
    
    def __init__(self, parent, id, pos, size):
        super().__init__(parent, id, pos, size)
        #need to add parent attribute so that plotter can call within this class, timing issue here????
        self.parent=parent
        self.plotter = parent.apanel
        self.InitForm()        
        self.currentDirectory = os.getcwd()
        

    def InitForm(self):
        self.oldfile = ""
        #Make the Sizers that will always be shown
        self.mainSizer = wx.BoxSizer(wx.HORIZONTAL)
        controlSizer = wx.BoxSizer(wx.VERTICAL)
        resultSizer = wx.BoxSizer(wx.VERTICAL)

        #Control Sizer:
        #Add title
        ctext = wx.StaticText(self, wx.ID_ANY, "Controller Side")
        controlSizer.Add(ctext, 0, wx.CENTER|wx.TOP, 0)
        #Add Analyze Button
        ##analyze_button = wx.Button(self, wx.ID_ANY, 'Analyze')
        ##controlSizer.Add(analyze_button, 0, wx.ALL, 5)
        #Add Button Sizer to contain 'Previous' and 'Next' Buttons (Hidden on start up)
        buttonSizer = wx.BoxSizer(wx.HORIZONTAL)
        self.next_button = wx.Button(self, wx.ID_ANY, 'Next')
        self.next_button.Hide()
        self.prev_button = wx.Button(self, wx.ID_ANY, "Previous")
        self.prev_button.Hide()
        self.Bind(wx.EVT_BUTTON, self.next, self.next_button)
        self.Bind(wx.EVT_BUTTON, self.previous, self.prev_button)
        ##self.Bind(wx.EVT_BUTTON, self.analyze, analyze_button)
        buttonSizer.Add(self.prev_button, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 5)
        buttonSizer.Add(self.next_button, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 5)
        controlSizer.Add(buttonSizer, 0, wx.ALL|wx.EXPAND, 0)
        #Add FileSizer for file input
        fileSizer = wx.BoxSizer(wx.VERTICAL)
        self.filename = wx.StaticText(self, id=wx.ID_ANY, label="No File Currently Selected")
#        browser = wx.Button(self, wx.ID_ANY, 'Browse')
#        browser.Bind(wx.EVT_BUTTON, self.onOpenFile)
        self.fname = "No File Currently Selected"
        fileSizer.Add(self.filename, 0, wx.ALL, 0)
#        fileSizer.Add(browser, 0, wx.ALL|wx.CENTER, 0)
        controlSizer.Add(fileSizer, 0, wx.ALL|wx.EXPAND, 0)
        #Create Sizer for Channel Selectors
        self.board1text = wx.StaticText(self, wx.ID_ANY, "Board 1")
        self.board2text = wx.StaticText(self, wx.ID_ANY, "Board 2")
        board1Sizer = wx.BoxSizer(wx.VERTICAL)
        board2Sizer = wx.BoxSizer(wx.VERTICAL)
        board1Sizer.Add(self.board1text, 0, wx.ALL|wx.ALIGN_LEFT|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.board2text, 0, wx.ALL|wx.ALIGN_LEFT|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        self.board1text.Hide()
        self.board2text.Hide()
        self.channel11 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 1")
        self.channel12 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 2")
        self.channel13 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 3")
        self.channel14 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 4")
        self.channel21 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 1")
        self.channel22 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 2")
        self.channel23 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 3")
        self.channel24 = wx.CheckBox(self, id=wx.ID_ANY, label = "Channel 4")
        #Create matrix of channel checkboxes for indexing purposes
        self.channelmatrix = [[self.channel11, self.channel12, self.channel13, self.channel14], [self.channel21, self.channel22, self.channel23, self.channel24]]
        
    
        #Channel Select
        dataselectorSizer = wx.BoxSizer(wx.HORIZONTAL)
        for board in self.channelmatrix:
             for channel in board:
                 channel.Hide()
        board1Sizer.Add(self.channel11, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board1Sizer.Add(self.channel12, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board1Sizer.Add(self.channel13, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board1Sizer.Add(self.channel14, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel21, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel22, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel23, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel24, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        dataselectorSizer.Add(board1Sizer, 0, wx.ALL|wx.ALIGN_LEFT, 0)
        dataselectorSizer.Add(board2Sizer, 0, wx.ALL|wx.ALIGN_CENTER, 0)
        controlSizer.Add(dataselectorSizer, 0, wx.ALL|wx.ALIGN_CENTER|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)

        #Timing Select
        self.timeSizer = wx.BoxSizer(wx.VERTICAL)
        timeselectorSizer = wx.BoxSizer(wx.HORIZONTAL)
        timing = wx.StaticText(self, id=wx.ID_ANY, label="Timing Difference (ns): ")
        self.tsetting = wx.SpinCtrl(self, wx.ID_ANY)
        self.tsettingenable = wx.CheckBox(self, id=wx.ID_ANY, label = "Enable")
        timeselectorSizer.Add(timing, 0, wx.ALL|wx.ALIGN_LEFT, 0)
        timeselectorSizer.Add(self.tsetting, 0, wx.ALL|wx.ALIGN_CENTER, 0)
        timeselectorSizer.Add(self.tsettingenable, 0, wx.ALL|wx.ALIGN_RIGHT, 0)
        timechannelselect = wx.BoxSizer(wx.HORIZONTAL)
        self.channel1 = wx.Choice(self, id=wx.ID_ANY, choices = ["None"])
        self.channel2 = wx.Choice(self, id=wx.ID_ANY, choices = ["None"])
        timechannelselect.Add(self.channel1, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        timechannelselect.Add(self.channel2, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        self.timeSizer.Add(timeselectorSizer, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        self.timeSizer.Add(timechannelselect, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN|wx.ALIGN_CENTER, 0)
        self.timeSizer.ShowItems(False)
        controlSizer.Add(self.timeSizer, 0, wx.ALL|wx.ALIGN_LEFT|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)

        #Amplitude(s) Select
        self.ampsizer = wx.BoxSizer(wx.VERTICAL)
        self.ampmatrix = [AmplitudeSelect(self, self.ampsizer, 1).buildsizers(), AmplitudeSelect(self, self.ampsizer, 2).buildsizers()]
        self.ampsizer.ShowItems(False)
        

        
        #Create amlitude matrix for later reference
        controlSizer.Add(self.ampsizer, 0, wx.ALL|wx.ALIGN_LEFT|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)

        #Add graphing button
        self.graphbutton = wx.Button(self, wx.ID_ANY, "Plot")
        self.Bind(wx.EVT_BUTTON, self.graphdata, self.graphbutton)
        self.changechannelbutton = wx.Button(self, wx.ID_ANY, "Reconfigure Channels")
        self.Bind(wx.EVT_BUTTON, self.changechannel, self.changechannelbutton)
        #Add Option to go to specific event
        self.gototext = wx.StaticText(self, wx.ID_ANY, "Go To Event #: ")
        self.goto = wx.SpinCtrl(self, wx.ID_ANY)
        self.gotobutton = wx.Button(self, wx.ID_ANY, "GO!")
        self.Bind(wx.EVT_BUTTON, self.gotoevent, self.gotobutton)
        self.gotosizer = wx.BoxSizer(wx.HORIZONTAL)
        self.gotosizer.Add(self.gototext, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        self.gotosizer.Add(self.goto, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        self.gotosizer.Add(self.gotobutton, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        graphSizer = wx.BoxSizer(wx.VERTICAL)
        graphSizer.Add(self.graphbutton, 0, wx.ALL|wx.ALIGN_CENTER|wx.RESERVE_SPACE_EVEN_IF_HIDDEN,0)
        graphSizer.Add(self.changechannelbutton, 0, wx.ALL|wx.ALIGN_CENTER|wx.RESERVE_SPACE_EVEN_IF_HIDDEN,0)
        graphSizer.Add(self.gotosizer, 0, wx.ALL|wx.ALIGN_CENTER|wx.RESERVE_SPACE_EVEN_IF_HIDDEN,0)
        self.graphbutton.Hide()
        self.changechannelbutton.Hide()
        self.gototext.Hide()
        self.goto.Hide()
        self.gotobutton.Hide()
        controlSizer.Add(graphSizer, 0, wx.ALL|wx.ALIGN_CENTER, 0)        
        #Create blank sizer for separation between end of filesizer and beginning of statistics(characteristics) sizer
        controlSizer.Add(1000,300,0)


        #Add statistics (characteristics) sizer 

        self.stats = wx.BoxSizer(wx.VERTICAL)
        stats = wx.StaticText(self, id=wx.ID_ANY, label = "Statistics")
        #Create Horizontal Sizers for Key Value Pairs
        charkeyvalsizer = wx.BoxSizer(wx.HORIZONTAL)
        #Create Key and Value sizers
        keysizer=wx.BoxSizer(wx.VERTICAL)
        valsizer=wx.BoxSizer(wx.VERTICAL)
        #Create Labels (Keys) for each Characteristic
        risetime = wx.StaticText(self, id=wx.ID_ANY, label = "Rise Time")
        peaktime = wx.StaticText(self, id=wx.ID_ANY, label = "Peak Time")
        falltime = wx.StaticText(self, id=wx.ID_ANY, label = "Fall Time")
        charge = wx.StaticText(self, id=wx.ID_ANY, label = "Charge")
        amplitude = wx.StaticText(self, id=wx.ID_ANY, label = "Amplitude")
        #Create blank labels (Values) for the actual values to go in  
        self.risetimeval = wx.StaticText(self, id=wx.ID_ANY, label = "Rise Val")
        self.peaktimeval = wx.StaticText(self, id=wx.ID_ANY, label = "Peak Val")
        self.falltimeval = wx.StaticText(self, id=wx.ID_ANY, label = "Fall Val")
        self.chargeval = wx.StaticText(self, id=wx.ID_ANY, label = "Charge Val")
        self.amplitudeval = wx.StaticText(self, id=wx.ID_ANY, label = "Amplitude Val")
        #Add keys and values to respective sizers
        keysizer.Add(risetime, 0, wx.ALIGN_LEFT,0)
        keysizer.Add(peaktime, 0, wx.ALIGN_LEFT, 0)
        keysizer.Add(falltime, 0, wx.ALIGN_LEFT, 0)
        keysizer.Add(charge, 0, wx.ALIGN_LEFT, 0)
        keysizer.Add(amplitude, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.risetimeval, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.peaktimeval, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.falltimeval, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.chargeval, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.amplitudeval, 0, wx.ALIGN_LEFT, 0)
        #Add key and value pairs to charkeyvalsizer
        charkeyvalsizer.Add(keysizer, 0, wx.ALL, 0)
        #Blank sizer for formatting purposes
        charkeyvalsizer.Add(20,0,0)
        charkeyvalsizer.Add(valsizer, 0, wx.ALL, 0)
        #Add characteristic labels to stats sizer
        self.stats.Add(stats, 0, wx.ALIGN_CENTER, 0)
        self.stats.Add(charkeyvalsizer, 0, wx.ALIGN_LEFT, 0)
        self.stats.ShowItems(False)
        #Add stats sizer to control sizer
        controlSizer.Add(self.stats, 0, wx.ALL|wx.EXPAND|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        #Add amplitude (waveform) and charge spectrum buttons
        spectrumsizer=wx.BoxSizer(wx.HORIZONTAL)
        self.waveformspec=wx.Button(self, id=wx.ID_ANY, label="Amplitudes")
        self.chargespec=wx.Button(self, id=wx.ID_ANY, label="Charges")
        self.Bind(wx.EVT_BUTTON, self.plotchargespec, self.chargespec)
        spectrumsizer.Add(self.waveformspec, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        self.Bind(wx.EVT_BUTTON, self.plotwaveformspec, self.waveformspec)
        spectrumsizer.Add(self.chargespec, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        self.waveformspec.Hide()
        self.chargespec.Hide()
        controlSizer.Add(100,50,0)
        controlSizer.Add(spectrumsizer, 0, wx.ALIGN_CENTER, 0)          
        #Add Feedback Sizer
        self.fbtext = wx.TextCtrl(self, id=wx.ID_ANY, size=(1000,200), style = wx.TE_READONLY|wx.TE_LEFT|wx.TE_MULTILINE)
        style = self.fbtext.GetWindowStyle()
        self.fbtext.AppendText("App Log\n")
        controlSizer.Add(self.fbtext, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        #Add sizers to the main sizer (note the result sizer is blank and will be used when a button is clicked)
        self.mainSizer.Add(controlSizer, 1, wx.ALL, 0)
        self.mainSizer.Add(resultSizer, 1, wx.ALL, 5)
        # Final Configs...    
        self.SetSizer(self.mainSizer)
        self.mainSizer.Fit(self)
        self.Layout()

    def onOpenFile(self, event):
#            """
#           Create and show the Open FileDialog
#          """
        dlg = wx.FileDialog(
        self, message="Choose a file Test Message",
        defaultDir=self.currentDirectory, 
        defaultFile="",
        wildcard="dat files (*.dat)|*.dat",
        style=wx.FD_OPEN | wx.FD_MULTIPLE | wx.FD_CHANGE_DIR
        )
        if dlg.ShowModal() == wx.ID_OK:
            filepath = ""
            paths = dlg.GetPaths()
            name = paths[0]
            dname = paths[0].split("/")[-1]
            self.filename.SetLabel(dname)
            self.fname = name
        dlg.Destroy()
        return 
 
    def analyze(self, event):
        f = self.fname
        #Check to see if Analyze Button Has been clicked yet
        if f != "No File Currently Selected" and f != self.oldfile:
            #self.fbtext.AppendText("Start: %s" % f)
            self.next_button.Hide()
            self.prev_button.Hide()
            self.oldfile = f
            self.changechannelbutton.Hide()
            self.gototext.Hide()
            self.goto.Hide()
            self.gotobutton.Hide()
            self.waveformspec.Show()
            self.chargespec.Show()
            for board in self.channelmatrix:
                for channel in board:
                    channel.SetValue(False)
                    channel.Hide()
            self.Layout()            
            while(self.plotter.nb.GetPageCount()):
                self.plotter.nb.DeletePage(0)

            self.data = Data(f)
            self.goto.SetMin(1)
            self.goto.SetMax(len(self.data.events))
            self.goto.SetValue(1)
            self.showchannels()
        else:
            self.fbtext.AppendText("Select Different File\n")
            return


    def showchannels(self):
        #Iterate through the channels, and display the ones that read_data has available
        self.graphbutton.Show()
        #multidimensional array that is indexed by board and then channel
        availablechannels = self.data.loadedchannels
        numchannels = len(availablechannels[0]) + len(availablechannels[1]) 
        if numchannels > 1:
            self.timeSizer.ShowItems(True)
            self.mainSizer.Layout()

        if len(availablechannels[0]) > 0:
            self.board1text.Show()
            self.ampsizer.GetChildren()[0].GetWindow().Show()
            self.Layout()

        if len(availablechannels[1]) > 0:
            self.board2text.Show()
            self.ampsizer.GetChildren()[1].GetWindow().Show()
            self.ampsizer.GetChildren()[0].GetWindow().Show()
            self.Layout()        
        #Add String labels to drop down menus for timing select
        strings = []
        b = 0
        for board in availablechannels:
            b += 1
            c = 0
            for channel in board:
                c += 1
                string = "B%d C%d" % (b, c)
                self.channel1.Append(string)
                self.channel2.Append(string)
                self.channelmatrix[availablechannels.index(board)][channel - 1].Show()
                self.channelmatrix[availablechannels.index(board)][channel - 1].Enable()
                self.ampmatrix[availablechannels.index(board)][channel - 1].ShowItems(True)
                

    def changechannel(self, event):
        # Allow user to check or uncheck boxes, will result in data being regraphed (will not run read_data again)
        self.timeSizer.ShowItems(True)
        self.mainSizer.Layout()
        self.prev_button.Hide()
        self.next_button.Hide()
        self.graphbutton.Show()
        self.changechannelbutton.Hide()
        self.gototext.Hide()
        self.goto.Hide()
        self.gotobutton.Hide()
        availableboards = self.data.numboards
        availablechannels = self.data.loadedchannels
        if len(availablechannels[0]) > 0:
            self.board1text.Show()
            self.ampsizer.GetChildren()[0].GetWindow().Show()
            self.Layout()

        if len(availablechannels[1]) > 0:
            self.board2text.Show()
            self.ampsizer.GetChildren()[1].GetWindow().Show()
            self.ampsizer.GetChildren()[0].GetWindow().Show()
            self.Layout()        
        for board in availablechannels:
            for channel in board:
                self.channelmatrix[availablechannels.index(board)][channel - 1].Enable()
                self.ampmatrix[availablechannels.index(board)][channel - 1].ShowItems(True)
        
                
                   
    def graphdata(self, event):
            numchannels = 0
            for board in self.channelmatrix:
                for channel in board:
                    if channel.IsChecked():
                        numchannels += 1
                    else:
                        continue

            if numchannels > 0:
                if numchannels == 1:
                    self.stats.ShowItems(True)
                else:
                    self.stats.ShowItems(False)
   
            #Clean the current graph and plot the data if at least one checkbox is checked
                self.timeSizer.ShowItems(False)
                self.ampsizer.ShowItems(False)
                while(self.plotter.nb.GetPageCount()):
                    self.plotter.nb.DeletePage(0)
                
                self.index = 0 
                self.next_button.Show()
                self.prev_button.Show()
                self.Layout()
                colors = ["Black", "Blue", "Green"]
                i = 0
                self.graphbutton.Hide()
                self.changechannelbutton.Show()
                self.gototext.Show()
                self.goto.Show()
                self.gotobutton.Show()
                #Need more info on how data from 2nd board is passed in order to use 2nd board
                while True:
                    fault = False
                    if self.tsettingenable.IsChecked():
                        timingdiff = self.tsetting.GetValue()
                        channel1 = self.channel1.GetString(self.channel1.GetSelection())
                        channel2 = self.channel2.GetString(self.channel2.GetSelection())
                        eventfound = False
                        while True:
                            #print("Event not found")
                            ptime1 = float(self.data.stats['single_channel'][int(channel1[-1]) - 1]["peak_time"][self.index])  
                            ptime2 = float(self.data.stats['single_channel'][int(channel2[-1]) - 1]["peak_time"][self.index])  
                            diff = abs(ptime1 - ptime2)
                            if diff < timingdiff: #Threshold
                               break  
                                        
                            else:
                                fault = True
                                break

                    for board in self.ampmatrix:
                        for channel in board:
                            if channel.GetChildren()[2].GetWindow().IsChecked():
                                triggamp = channel.GetChildren()[1].GetWindow().GetValue()
                                channelnum = int(channel.GetChildren()[0].GetWindow().GetLabel()[8])-1
                                amp = float(self.data.stats['single_channel'][channelnum]["amplitude"][self.index]) 
                                #print(amp)
                                if triggamp > amp * 1000: #Bad
                                    fault = True
                                    break

                                else:
                                    continue              
                                    
                            else:
                                continue
                                        
                    if fault == True:
                        self.index += 1
                        continue
                    
                    else:
                        break                    
                      

                axes = self.plotter.add("Event {}".format(self.index + 1)).gca()
                for board in self.channelmatrix:
                    for channel in board:
                        channel.Disable()
                        if channel.IsChecked():
                            axes.grid(True)
                            axes.set_title("Voltage vs Time")
                            axes.set_ylabel("Voltage (V)")
                            axes.set_xlabel("Time (ns)")
                            plt = self.data.events[self.index][board.index(channel)]
                            axes.plot(plt, label="Channel " + str(board.index(channel) + 1), color = colors[i])
                            i += 1
                            axes.legend()
                       
                        else:
                            continue
      

            else:
                self.fbtext.AppendText("No Channel Selected\n")    
                return
        

    def add(self, name="plot"):
        page = Plot(self.nb)
        self.nb.AddPage(page, name)
        return page.figure


    def next(self, event):
      
        self.index += 1
        #Check to see if current page is last one, if it is then make the next one
        if self.plotter.nb.GetSelection() == self.plotter.nb.GetPageCount() -1:
            while True:
                fault = False
                if self.tsettingenable.IsChecked():
                    timingdiff = self.tsetting.GetValue()
                    channel1 = self.channel1.GetString(self.channel1.GetSelection())
                    channel2 = self.channel2.GetString(self.channel2.GetSelection())
                    eventfound = False
                    while True:
                        #print("Event not found")
                        ptime1 = float(self.data.stats['single_channel'][int(channel1[-1]) - 1]["peak_time"][self.index])  
                        ptime2 = float(self.data.stats['single_channel'][int(channel2[-1]) - 1]["peak_time"][self.index])  
                        diff = abs(ptime1 - ptime2)
                        if diff < timingdiff: #Threshold
                            break  
                                        
                        else:
                            fault = True
                            break

                for board in self.ampmatrix:
                    for channel in board:
                        if channel.GetChildren()[2].GetWindow().IsChecked():
                            triggamp = channel.GetChildren()[1].GetWindow().GetValue()
                            channelnum = int(channel.GetChildren()[0].GetWindow().GetLabel()[8])-1
                            amp = float(self.data.stats['single_channel'][channelnum]["amplitude"][self.index]) 
                            #print(amp)
                            if triggamp > amp * 1000: #Bad
                                fault = True
                                break
                            else:
                                continue              
                                    
                                        
                if fault == True:
                    self.index += 1
                    continue
                    
                else:
                    break                    
                      

            axes = self.plotter.add("Event {}".format(self.index + 1)).gca()
            colors = ["Black", "Blue", "Green"]
            i = 0
            for board in self.channelmatrix:
                for channel in board:
                    channel.Disable()
                    if channel.IsChecked():
                        axes.grid(True)
                        axes.set_title("Voltage vs Time")
                        axes.set_ylabel("Voltage (V)")
                        axes.set_xlabel("Time (ns)")
                        plt = self.data.events[self.index][board.index(channel)]
                        axes.plot(plt, label="Channel " + str(board.index(channel) + 1), color = colors[i])
                        i += 1
                        axes.legend()
                       
                    else:
                        continue
            self.plotter.nb.AdvanceSelection(True)
        else:
            self.plotter.nb.AdvanceSelection(True)

        return

    def previous(self, event):
        if self.index == 0:
            return
        else:
            self.index -= 1
            self.plotter.nb.AdvanceSelection(False)
            return

        eventnum = self.goto.GetValue() - 1


    def gotoevent(self, event):
        if eventnum < self.plotter.nb.GetPageCount():
            print("Error, please select event that has not already been displayed")
        else:
            axes = self.plotter.add('Event {}'.format(eventnum + 1)).gca()
            colors = ["Black", "Blue", "Green"]
            i = 0
            for board in self.channelmatrix:
                for channel in board:
                    if channel.IsChecked():
                    
                        plt = self.data.events[eventnum][board.index(channel)]
                        axes.plot(plt, label="Channel " + str(board.index(channel) + 1), color = colors[i])
                        i += 1
                    else:
                        continue
            axes.set_title("Voltage vs Time")
            axes.set_ylabel("Voltage (V)")
            axes.set_xlabel("Time (ns)")
            axes.legend()
            self.plotter.nb.AdvanceSelection()
            self.Layout()
            self.plotter.Layout()
            

     
    def plotwaveformspec(self, event):
        plt.figure()
        amps = self.data.stats["single_channel"][0]["amplitude"]
        amps.value_counts(normalize = False, sort = False, bins = 250).plot()
        plt.xlabel('Amplitude')
        plt.ylabel('Number of Events')
        plt.title('Frequency vs. Amplitude')
        plt.show()
        plt.grid(True)
        plt.plot()
        return

    def plotchargespec(self, event):
        plt.figure()
        plt.hist(self.data.waveforms, 50, density=True, facecolor="g", alpha=0.75)
        plt.xlabel('Amplitude')
        plt.ylabel('Number of Events')
        plt.title('Frequency vs. Amplitude')
        plt.xlim(0, 20)
        plt.ylim(0, 10)
        plt.grid(True)
        plt.plot()
        plt.show()
        return



class Data:
    def __init__(self, f):
        data = read_data(f)
        self.numboards = 2
        #Nested array, each inner array represents one board, numbers appearing in this array will be indexes according to human (1-8) not (0-7)
        self.loadedchannels = [[], []]
        self.events=data.events
        #Max of 8 channels
        for i in range(8):
            try:
                #See if this is defined, if KeyError, then no data exists in channel i 
                self.events[0][i]
                if i < 4:
                    #Data is present, add its index + 1 (i.e. human index rather than computer)
                    self.loadedchannels[0].append(i + 1)
                else:
                    # Data is present, add its index + 1 (i.e. human index rather than computer)
                    self.loadedchannels[1].append(i+1)
            except KeyError:
                continue
        

        self.stats = data.calc_stats()


def main():
    app=MainApp()
    wx.lib.inspection.InspectionTool().Show()
    app.MainLoop() 


if __name__ == "__main__":
    main()

