import wx
import wx.lib.agw.aui as aui
import wx.lib.mixins.inspection as wit
import matplotlib as mpl
from matplotlib.backends.backend_wxagg import FigureCanvasWxAgg as FigureCanvas
from matplotlib.backends.backend_wxagg import NavigationToolbar2WxAgg as NavigationToolbar
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
        

    def InitForm(self):

        #Make the Sizers that will always be shown
        self.mainSizer = wx.BoxSizer(wx.HORIZONTAL)
        controlSizer = wx.BoxSizer(wx.VERTICAL)
        resultSizer = wx.BoxSizer(wx.VERTICAL)

        
        #Make useable things
        next_button = wx.Button(self, wx.ID_ANY, 'Next')
        next_button.Hide()
        prev_button = wx.Button(self, wx.ID_ANY, "Previous")
        prev_button.Hide()
        ctext = wx.StaticText(self, wx.ID_ANY, "Controller Side")
        analyze_button = wx.Button(self, wx.ID_ANY, 'Analyze')
        self.Bind(wx.EVT_BUTTON, self.analyze(next_button, prev_button), analyze_button)
        self.Bind(wx.EVT_BUTTON, self.next, next_button)
        self.Bind(wx.EVT_BUTTON, self.previous, prev_button)
            
        #Add contents to each sizer
        controlSizer.Add(ctext, 0, wx.CENTER|wx.TOP, 0)
        controlSizer.Add(analyze_button, 0, wx.ALL, 5)
        
        buttonSizer = wx.BoxSizer(wx.HORIZONTAL)
        buttonSizer.Add(prev_button, 0, wx.ALL, 5)
        buttonSizer.Add(next_button, 0, wx.ALL, 5)
        controlSizer.Add(buttonSizer, 0, wx.ALL|wx.EXPAND, 0)
        #controlSizer.Add(res_button, 0, wx.ALL, 5)
        self.mainSizer.Add(controlSizer, 1, wx.ALL, 0)
        self.mainSizer.Add(resultSizer, 1, wx.ALL, 5)

        # Final Configs...    
        self.SetSizer(self.mainSizer)
        self.mainSizer.Fit(self)
        self.Layout()



# Note about syntax, usually you Bind functions by calling them by name (myFunc as opposed to
# myFunc() which would cause the function to execute immediately upon binding. If you want to bind a function
# with arguments to the button, the outerfunction can be defined to have an inner function. The outer function
# will carry the actual arguments while inner one will carry only the event, since the outerfunction returns the
# inner one, the inner one will have all the necessary arguments and only be called upon the event...
    def analyze(self, button1, button2):
        def OnClick(event):
         
            if not button1.IsShown():
                self.plotter = self.parent.apanel
                self.index = 0
                self.data = Data()
                self.data=self.data.set
                #print(self.parent.apanel.nb.IsShown())
                button1.Show()
                button2.Show()
                self.Layout()
                axes = self.plotter.add('Waveform 1').gca()
                axes.plot(self.data[0][0], self.data[0][1])
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
        #Check to see if current page is last one, if it is then make the next one
        if self.plotter.nb.GetSelection() == self.plotter.nb.GetPageCount() -1:
            self.index += 1
            axes = self.plotter.add('Waveform {}'.format(self.index + 1)).gca()
            axes.plot(self.data[self.index][0], self.data[self.index][1])
            self.plotter.nb.AdvanceSelection()
            print(self.plotter.nb.GetSelection())
            self.Layout()
            self.plotter.Layout()

        else:
            self.plotter.nb.AdvanceSelection(True)
        return

    def previous(self, event):
        self.plotter.nb.AdvanceSelection(False)
        return
        

class Data:
    def __init__(self):
        self.set=[[[1,2,3],[2,1,4]],[[1, 2, 3, 4, 5], [2, 1, 4, 2, 3]],[[1, 4, 6, 19], [4, 7, 8, 15]], [[1,3,5,5],[-3,5,-7,10]]]
    







    



def main():
    app=MainApp()
#    wx.lib.inspection.InspectionTool().Show()
    app.MainLoop() 
