import os
import numpy as np
import matplotlib.pyplot as plt
import wx
import wx.lib.plot.polyobjects as po
import wx.lib.agw.aui as aui
import wx.lib.mixins.inspection as wit
import matplotlib as mpl
from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigureCanvas
from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar
#import wx.lib.agw.multidirdialog as MDD
import wx.lib.inspection
from read_data import read_data

class MainApp(wx.App):
    
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
        # Make sizer and add panels to sizer to for auto-resizing
        sizer=wx.BoxSizer(wx.HORIZONTAL)
        self.apanel = PlotNotebook(self, id=-1, pos=(100,100), size=(300,300))
        self.panel = MainPanel(self, id=wx.ID_ANY, pos=(0,100), size=(100,100))
        sizer.Add(self.panel, 1, wx.EXPAND|wx.ALL, 5)
        sizer.Add(self.apanel, 3, wx.ALIGN_TOP|wx.EXPAND, 0)
        self.SetSizer(sizer)



class PlotNotebook(wx.Panel):
    def __init__(self, parent, id, pos, size):
        wx.Panel.__init__(self, parent, id, pos, size)
        self.parent = parent
        atext = wx.StaticText(self, wx.ID_ANY, "Analysis Side")
        self.nb = aui.AuiNotebook(self)
        self.Bind(aui.EVT_AUINOTEBOOK_PAGE_CHANGED, self.on_nb_tab_changed, self.nb)
        sizer = wx.BoxSizer(wx.VERTICAL)
        sizer.Add(atext, 0, wx.TOP|wx.CENTER)
        sizer.Add(self.nb, 5, wx.TOP|wx.EXPAND)
        self.SetSizer(sizer)

    def add(self, name="plot"):
        page = Plot(self.nb)
        page.name=name
        self.nb.AddPage(page, name)
        return page.figure

    def on_nb_tab_changed(self, event):
        index = int(self.nb.GetCurrentPage().name.split()[1]) - 1
        mainpanel = self.parent.panel
        mainpanel.risetimeval.SetLabel(str(mainpanel.data.risetimes[index]))
        mainpanel.peaktimeval.SetLabel(str(mainpanel.data.peaktimes[index]))
        mainpanel.falltimeval.SetLabel(str(mainpanel.data.falltimes[index]))
        mainpanel.chargeval.SetLabel(str(mainpanel.data.charges[index]))
        mainpanel.plotter.Layout()
       


class Plot(wx.Panel):
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
        analyze_button = wx.Button(self, wx.ID_ANY, 'Analyze')
        controlSizer.Add(analyze_button, 0, wx.ALL, 5)
        #Add Button Sizer to contain 'Previous' and 'Next' Buttons (Hidden on start up)
        buttonSizer = wx.BoxSizer(wx.HORIZONTAL)
        self.next_button = wx.Button(self, wx.ID_ANY, 'Next')
        self.next_button.Hide()
        self.prev_button = wx.Button(self, wx.ID_ANY, "Previous")
        self.prev_button.Hide()
        self.Bind(wx.EVT_BUTTON, self.next, self.next_button)
        self.Bind(wx.EVT_BUTTON, self.previous, self.prev_button)
        self.Bind(wx.EVT_BUTTON, self.analyze, analyze_button)
        buttonSizer.Add(self.prev_button, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 5)
        buttonSizer.Add(self.next_button, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 5)
        controlSizer.Add(buttonSizer, 0, wx.ALL|wx.EXPAND, 0)
        #Add FileSizer for file input
        fileSizer = wx.BoxSizer(wx.HORIZONTAL)
        self.filename = wx.StaticText(self, id=wx.ID_ANY, label="No File Currently Selected")
        browser = wx.Button(self, wx.ID_ANY, 'Browse')
        self.fname = "No File Currently Selected"
        self.Bind(wx.EVT_BUTTON, self.onOpenFile, browser)
        fileSizer.Add(self.filename, 0, wx.ALL, 0)
        fileSizer.Add(browser, 0, wx.ALL, 0)
        controlSizer.Add(fileSizer, 0, wx.ALL|wx.EXPAND, 0)
        #Create Sizer for Channel Selectors
        dataselectorSizer=wx.BoxSizer(wx.HORIZONTAL)
        board1text = wx.StaticText(self, wx.ID_ANY, "Board 1")
        board2text = wx.StaticText(self, wx.ID_ANY, "Board 2")
        board1Sizer = wx.BoxSizer(wx.VERTICAL)
        board2Sizer = wx.BoxSizer(wx.VERTICAL)
        board1Sizer.Add(board1text, 0, wx.ALL|wx.ALIGN_LEFT, 0)
        board2Sizer.Add(board2text, 0, wx.ALL|wx.ALIGN_LEFT, 0)
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
        for board in self.channelmatrix:
             for channel in board:
                 channel.Hide()
        self.graphbutton = wx.Button(self, wx.ID_ANY, "Graph")
        self.Bind(wx.EVT_BUTTON, self.graphdata, self.graphbutton)
        board1Sizer.Add(self.channel11, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board1Sizer.Add(self.channel12, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board1Sizer.Add(self.channel13, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board1Sizer.Add(self.channel14, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel21, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel22, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel23, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        board2Sizer.Add(self.channel24, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 0)
        dataselectorSizer.Add(board1Sizer, 0, wx.ALL|wx.ALIGN_LEFT, 0)
#        dataselectorSizer.Add(20, 0, 0)
        dataselectorSizer.Add(self.graphbutton, 0, wx.ALL|wx.ALIGN_CENTER|wx.RESERVE_SPACE_EVEN_IF_HIDDEN,0)
        self.graphbutton.Hide()
        dataselectorSizer.Add(board2Sizer, 0, wx.ALL|wx.ALIGN_RIGHT, 0)
        controlSizer.Add(dataselectorSizer, 0, wx.ALL|wx.ALIGN_CENTER, 0)
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
        #Create blank labels (Values) for the actual values to go in  
        self.risetimeval = wx.StaticText(self, id=wx.ID_ANY, label = "Rise Val")
        self.peaktimeval = wx.StaticText(self, id=wx.ID_ANY, label = "Peak Val")
        self.falltimeval = wx.StaticText(self, id=wx.ID_ANY, label = "Fall Val")
        self.chargeval = wx.StaticText(self, id=wx.ID_ANY, label = "Charge Val")
        #Add keys and values to respective sizers
        keysizer.Add(risetime, 0, wx.ALIGN_LEFT,0)
        keysizer.Add(peaktime, 0, wx.ALIGN_LEFT, 0)
        keysizer.Add(falltime, 0, wx.ALIGN_LEFT, 0)
        keysizer.Add(charge, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.risetimeval, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.peaktimeval, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.falltimeval, 0, wx.ALIGN_LEFT, 0)
        valsizer.Add(self.chargeval, 0, wx.ALIGN_LEFT, 0)
        #Add key and value pairs to charkeyvalsizer
        charkeyvalsizer.Add(keysizer, 0, wx.ALL, 0)
        #Blank sizer for formatting purposes
        charkeyvalsizer.Add(20,0,0)
        charkeyvalsizer.Add(valsizer, 0, wx.ALL, 0)
        #Add characteristic labels to stats sizer
        self.stats.Add(stats, 0, wx.ALIGN_CENTER, 0)
        self.stats.Add(charkeyvalsizer, 0, wx.ALIGN_LEFT, 0)
        #Add stats sizer to control sizer
        controlSizer.Add(self.stats, 0, wx.ALL|wx.EXPAND, 0)
        #Add waveform and charge spectrum buttons
        spectrumsizer=wx.BoxSizer(wx.HORIZONTAL)
        waveformspec=wx.Button(self, id=wx.ID_ANY, label="Amplitudes")
        self.Bind(wx.EVT_BUTTON, self.plotwaveformspec, waveformspec)
        chargespec=wx.Button(self, id=wx.ID_ANY, label="Charges")
        self.Bind(wx.EVT_BUTTON, self.plotchargespec, chargespec)
        spectrumsizer.Add(waveformspec, 0, wx.ALL, 0)
        spectrumsizer.Add(chargespec, 0, wx.ALL, 0)
        controlSizer.Add(100,100,0)
        controlSizer.Add(spectrumsizer, 0, wx.ALIGN_CENTER, 0)          
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
        self, message="Choose a file",
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
 

# Note about syntax, usually you Bind functions by calling them by name (myFunc as opposed to
# myFunc() which would cause the function to execute immediately upon binding. If you want to bind a function
# with arguments to the button, the outerfunction can be defined to have an inner function. The outer function
# will carry the actual arguments while inner one will carry only the event, since the outerfunction returns the
# inner one, the inner one will have all the necessary arguments and only be called upon the event...
    def analyze(self, event):

        for board in self.channelmatrix:
             for channel in board:
                 channel.SetValue(False)
                 channel.Hide()
        f = self.fname
        #Check to see if Analyze Button Has been clicked yet
        if f != "No File Currently Selected" and f != self.oldfile:
            self.oldfile = f
            while(self.plotter.nb.GetPageCount()):
                self.plotter.nb.DeletePage(0)
            self.data = Data(f)
            availableboards = self.data.numboards
            availablechannels = self.data.loadedchannels
            self.graphbutton.Show()
            for board in availablechannels:
                for channel in board:
                    self.channelmatrix[availablechannels.index(board)][channel - 1].Show()
            
        else:
            return
    

    def graphdata(self, event):
            self.index = 0 
            #print(self.parent.apanel.nb.IsShown())
            self.prev_button.Show()
            self.next_button.Show()
            self.Layout()
            #Plot first waveform
            axes = self.plotter.add('Waveform 1').gca()
            axes.set_title("Voltage vs Time")
            axes.set_ylabel("Voltage (V)")
            axes.set_xlabel("Time (ns)")
            colors = ["Black", "Blue"]
            i = 0
            for board in self.channelmatrix:
                for channel in board:
                    if channel.IsChecked():
                        graph = axes.plot(self.data.events[0].event[board.index(channel)][1], self.data.events[0].event[board.index(channel)][0], label = ("Board %s,Channel %s" % (self.channelmatrix.index(board)+1, board.index(channel) + 1)), color = colors[i])
                        i += 1
                    else:
                        continue

            axes.legend()

                #axes.plot([self.data.risetimes[0], self.data.risetimes[0]], [0, 4], color="Red")
                #axes.plot([self.data.falltimes[0], self.data.falltimes[0]],[0,4], color="Red")
        
           


    def add(self, name="plot"):
        page = Plot(self.nb)
        self.nb.AddPage(page, name)
        return page.figure


    def next(self, event):
      
        self.index += 1
      
        #Check to see if current page is last one, if it is then make the next one
        if self.plotter.nb.GetSelection() == self.plotter.nb.GetPageCount() -1:
            axes = self.plotter.add('Waveform {}'.format(self.index + 1)).gca()
            colors = ["Black", "Blue"]
            i = 0
            for board in self.channelmatrix:
                for channel in board:
                    if channel.IsChecked():
                        graph = axes.plot(self.data.events[self.index].event[board.index(channel)][1], self.data.events[self.index].event[board.index(channel)][0], label = ("Board %s,Channel %s" % (self.channelmatrix.index(board)+1, board.index(channel) + 1)), color = colors[i])
                        i += 1
                    else:
                        continue

           # for chn in self.requested_channels:
            #        axes.plot(self.data.events[self.index].event[int(self.data.channelassignment[chn])][1], self.data.events[self.index].event[int(self.data.channelassignment[chn])][0], color = "Black")
            #axes.plot(self.data.events[self.index + 2].event[0][1], self.data.events[self.index + 2].event[0][0]) #It appears that every other "event" is blank... why?!?!?
           # axes.plot([self.data.risetimes[self.index], self.data.risetimes[self.index]], [0, 4], color="Red")
           # axes.plot([self.data.falltimes[self.index], self.data.falltimes[self.index]],[0,4], color="Red")
            print(self.data.events[self.index + 1].event[0][0])
            axes.set_title("Voltage vs Time")
            axes.set_ylabel("Voltage (V)")
            axes.set_xlabel("Time (ns)")
            axes.legend()
            self.plotter.nb.AdvanceSelection()
            self.Layout()
            self.plotter.Layout()
            
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

## Use with threading, except CPU will be eaten up
#    def setstats(self):
#        while True:
#                continue
     
    def plotwaveformspec(self, event):

        plt.hist(self.data.waveforms, 50, density=True, facecolor="g", alpha=0.75)
        plt.xlabel('Amplitude')
        plt.ylabel('Number of Events')
        plt.title('Frequency vs. Amplitude')
        plt.xlim(0, 20)
        plt.ylim(0, 10)
        plt.grid(True)
        plt.show()
        return

    def plotchargespec(self, event):
        print("Hello World")
        return



class Data:
    def __init__(self, f):
        data = read_data(f)
        self.channelassignment = {}
        self.numboards = 2
        self.loadedchannels = [[1], [2]]
        self.events=data.events
        
        for i in range(len(self.loadedchannels)):
            self.channelassignment[str(self.loadedchannels[i])] = str(i)







        self.set=[[[1,2,3],[2,1,4]],[[1, 2, 3, 4, 5], [2, 1, 4, 2, 3]],[[1, 4, 6, 19], [4, 7, 8, 15]], [[1,3,5,5],[-3,5,-7,10]]]
        self.risetimes = [2,3,4,5]
        self.peaktimes = [4,7,9,10]
        self.falltimes = [3,4,1,5] 
        self.charges = [20, 45, 14, 40]  
        self.waveforms = np.array([15,16,17,18,14,15,15,15,16,10,18,15])       






    



def main():
    app=MainApp()
    wx.lib.inspection.InspectionTool().Show()
    app.MainLoop() 


if __name__ == "__main__":
    main()

