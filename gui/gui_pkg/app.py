import os
import wx
import wx.lib.agw.aui as aui
import wx.lib.mixins.inspection as wit
import matplotlib as mpl
from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigureCanvas
from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar
#import wx.lib.agw.multidirdialog as MDD
import wx.lib.inspection


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
        self.panel = MainPanel(self, id=wx.ID_ANY, pos=(0,100), size=(100,100))
        self.apanel = PlotNotebook(self, id=-1, pos=(100,100), size=(300,300))
        sizer.Add(self.panel, 1, wx.EXPAND|wx.ALL, 5)
        sizer.Add(self.apanel, 3, wx.ALIGN_TOP|wx.EXPAND, 0)
        self.SetSizer(sizer)



class PlotNotebook(wx.Panel):
    def __init__(self, parent, id, pos, size):
        wx.Panel.__init__(self, parent, id, pos, size)
        atext = wx.StaticText(self, wx.ID_ANY, "Analysis Side")
        self.nb = aui.AuiNotebook(self)
        sizer = wx.BoxSizer(wx.VERTICAL)
        sizer.Add(atext, 0, wx.TOP|wx.CENTER)
        sizer.Add(self.nb, 5, wx.TOP|wx.EXPAND)
        self.SetSizer(sizer)

    def add(self, name="plot"):
        page = Plot(self.nb)
        self.nb.AddPage(page, name)
        return page.figure

        


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
        self.parent = parent
        self.InitForm()        
        self.currentDirectory = os.getcwd()
        

    def InitForm(self):

        #Make the Sizers that will always be shown
        self.mainSizer = wx.BoxSizer(wx.HORIZONTAL)
        controlSizer = wx.BoxSizer(wx.VERTICAL)
        resultSizer = wx.BoxSizer(wx.VERTICAL)
        fileSizer = wx.BoxSizer(wx.HORIZONTAL)

        
        #Make useable things
        self.filename = wx.StaticText(self, id=wx.ID_ANY, label="No File Currently Selected")
        browser = wx.Button(self, wx.ID_ANY, 'Browse')
        next_button = wx.Button(self, wx.ID_ANY, 'Next')
        next_button.Hide()
        prev_button = wx.Button(self, wx.ID_ANY, "Previous")
        prev_button.Hide()
        ctext = wx.StaticText(self, wx.ID_ANY, "Controller Side")
        analyze_button = wx.Button(self, wx.ID_ANY, 'Analyze')
        self.Bind(wx.EVT_BUTTON, self.analyze(next_button, prev_button), analyze_button)
        self.Bind(wx.EVT_BUTTON, self.next, next_button)
        self.Bind(wx.EVT_BUTTON, self.previous, prev_button)
        self.Bind(wx.EVT_BUTTON, self.onOpenFile, browser)
        self.stats = wx.BoxSizer(wx.VERTICAL)
        stats = wx.StaticText(self, id=wx.ID_ANY, label = "Statistics")
        #Create Horizontal Sizers for each characteristic "Key Value Pair"
        charkeyvalsizer = wx.BoxSizer(wx.HORIZONTAL)
        keysizer=wx.BoxSizer(wx.VERTICAL)
        valsizer=wx.BoxSizer(wx.VERTICAL)
       ## risetimesizer=wx.BoxSizer(wx.HORIZONTAL)
       ## risetimevalsizer=wx.BoxSizer(wx.HORIZONTAL)
       ## peaktimesizer=wx.BoxSizer(wx.HORIZONTAL)
       ## peaktimevalsizer=wx.BoxSizer(wxx.HORIZONTAL)
       ## falltimesizer=wx.BoxSizer(wx.HORIZONTAL)
       ## falltimevalsizer=wx.BoxSizer(wx.HORIZONTAL)
       ## chargesizer=wx.BoxSizer(wx.HORIZONTAL)
       ## chargevalsizer=wx.BoxSizer(wx.HORIZONTAL)
        #Create Labels for each Characteristic
        risetime = wx.StaticText(self, id=wx.ID_ANY, label = "Rise Time")
        peaktime = wx.StaticText(self, id=wx.ID_ANY, label = "Peak Time")
        falltime = wx.StaticText(self, id=wx.ID_ANY, label = "Fall Time")
        charge = wx.StaticText(self, id=wx.ID_ANY, label = "Charge")
        #Create blank labels for the actual values to go in  
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
        charkeyvalsizer.Add(keysizer, 0, wx.ALL, 0)
        charkeyvalsizer.Add(20,0,0)
        charkeyvalsizer.Add(valsizer, 0, wx.ALL, 0)
 
        ##risetimesizer.Add(risetime, 0, wx.EXPAND, 0)
        ##risetimesizer.Add(self.risetimeval, 0, wx.EXPAND, 0)
        ##peaktimesizer.Add(peaktime, 0, wx.ALIGN_LEFT, 5)
        ##peaktimesizer.Add(self.peaktimeval, 0, wx.ALIGN_RIGHT, 5)
        ##falltimesizer.Add(falltime, 0, wx.ALIGN_LEFT, 5)
        ##alltimesizer.Add(self.falltimeval, 0, wx.ALIGN_RIGHT, 5)
        ##chargesizer.Add(charge, 0, wx.ALIGN_LEFT, 5)
        ##chargesizer.Add(self.chargeval, 0, wx.ALIGN_LEFT, 5)
        #Add contents to each sizer
        controlSizer.Add(ctext, 0, wx.CENTER|wx.TOP, 0)
        controlSizer.Add(analyze_button, 0, wx.ALL, 5)
        #Add characteristinc labels to stats sizer
        self.stats.Add(stats, 0, wx.ALIGN_CENTER, 0)
        self.stats.Add(charkeyvalsizer, 0, wx.ALIGN_LEFT, 0)
        ##self.stats.Add(risetimesizer, 0, wx.ALIGN_LEFT, 0)
        ##self.stats.Add(peaktimesizer, 0, wx.ALIGN_LEFT, 0)
        ##self.stats.Add(falltimesizer, 0, wx.ALIGN_LEFT, 0)
        ##self.stats.Add(chargesizer, 0, wx.ALIGN_LEFT, 0)


        buttonSizer = wx.BoxSizer(wx.HORIZONTAL)
        buttonSizer.Add(prev_button, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 5)
        buttonSizer.Add(next_button, 0, wx.ALL|wx.RESERVE_SPACE_EVEN_IF_HIDDEN, 5)
        controlSizer.Add(buttonSizer, 0, wx.ALL|wx.EXPAND, 0)
        fileSizer.Add(self.filename, 0, wx.ALL, 0)
        fileSizer.Add(browser, 0, wx.ALL, 0)
        controlSizer.Add(fileSizer, 0, wx.ALL|wx.EXPAND, 0)
        controlSizer.Add(1000,300,0)
        controlSizer.Add(self.stats, 0, wx.ALL|wx.EXPAND, 0)
        #controlSizer.Add(res_button, 0, wx.ALL, 5)
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
            print("You chose the following file(s):")
            print(paths)
            paths = paths[0].split("/")
            f = paths[-1]
            self.filename.SetLabel(f)
            f = open(f, "r")
            print(f.read())
        dlg.Destroy()
 

# Note about syntax, usually you Bind functions by calling them by name (myFunc as opposed to
# myFunc() which would cause the function to execute immediately upon binding. If you want to bind a function
# with arguments to the button, the outerfunction can be defined to have an inner function. The outer function
# will carry the actual arguments while inner one will carry only the event, since the outerfunction returns the
# inner one, the inner one will have all the necessary arguments and only be called upon the event...
    def analyze(self, button1, button2):
        def OnClick(event):
            #Check to see if Analyze Button Has been clicked yet
            if not button1.IsShown():
                self.plotter = self.parent.apanel
                self.index = 0
                self.data = Data()
                #print(self.parent.apanel.nb.IsShown())
                button1.Show()
                button2.Show()
                self.Layout()
                #Plot first waveform
                axes = self.plotter.add('Waveform 1').gca()
                axes.plot(self.data.set[0][0], self.data.set[0][1], color = "Black")
                axes.plot([self.data.risetimes[0], self.data.risetimes[0]], [0, 4], color="Red")
                axes.plot([self.data.falltimes[0], self.data.falltimes[0]],[0,4], color="Red")
                self.risetimeval.SetLabel(str(self.data.risetimes[0]))
                self.peaktimeval.SetLabel(str(self.data.peaktimes[0]))
                self.falltimeval.SetLabel(str(self.data.falltimes[0]))
                self.chargeval.SetLabel(str(self.data.charges[0]))
                self.plotter.Layout()



        
                #self.plotter.nb.DeletePage(1)
                #self.plotter.Layout()

            else:
                return
        return OnClick

    

    def add(self, name="plot"):
        page = Plot(self.nb)
        self.nb.AddPage(page, name)
        return page.figure


    def next(self, event):
        self.index += 1
        self.risetimeval.SetLabel(str(self.data.risetimes[self.index]))
        self.peaktimeval.SetLabel(str(self.data.peaktimes[self.index]))
        self.falltimeval.SetLabel(str(self.data.falltimes[self.index]))
        self.chargeval.SetLabel(str(self.data.charges[self.index])) 
        #Check to see if current page is last one, if it is then make the next one
        if self.plotter.nb.GetSelection() == self.plotter.nb.GetPageCount() -1:
            axes = self.plotter.add('Waveform {}'.format(self.index + 1)).gca()
            axes.plot(self.data.set[self.index][0], self.data.set[self.index][1])
            axes.plot([self.data.risetimes[self.index], self.data.risetimes[self.index]], [0, 4], color="Red")
            axes.plot([self.data.falltimes[self.index], self.data.falltimes[self.index]],[0,4], color="Red")
            self.plotter.nb.AdvanceSelection()
            #print(self.plotter.nb.GetSelection())
            self.Layout()
            self.plotter.Layout()

        else:
            self.plotter.nb.AdvanceSelection(True)
        return

    def previous(self, event):
        self.index -= 1
        self.plotter.nb.AdvanceSelection(False)
        self.risetimeval.SetLabel(str(self.data.risetimes[self.index]))
        self.peaktimeval.SetLabel(str(self.data.peaktimes[self.index]))
        self.falltimeval.SetLabel(str(self.data.falltimes[self.index]))
        self.chargeval.SetLabel(str(self.data.charges[self.index]))
        self.Layout()
        self.plotter.Layout() 
        return
        

class Data:
    def __init__(self):
        self.set=[[[1,2,3],[2,1,4]],[[1, 2, 3, 4, 5], [2, 1, 4, 2, 3]],[[1, 4, 6, 19], [4, 7, 8, 15]], [[1,3,5,5],[-3,5,-7,10]]]
        self.risetimes = [2,3,4,5]
        self.peaktimes = [4,7,9,10]
        self.falltimes = [3,4,1,5]   
        self.charges = [20,40,50,39]
       






    



def main():
    app=MainApp()
    wx.lib.inspection.InspectionTool().Show()
    app.MainLoop() 


if __name__ == "__main__":
    main()

