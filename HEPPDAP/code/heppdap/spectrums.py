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
import pandas as pd
import wx.richtext as rt
import time



df = [[1,2,3], [4,5,6]]

class Spectrumframe (wx.Frame):
    """
    Class used for creating frames other than the main one
    """

    def __init__(self, title = "Spectrum", parent=None, data = df, bins = 100, mode = None, params = None, xmin = 0, xmax = 0.5 ):
 #       app=wx.App(None)
        super().__init__(None, title=title)
        self.plotter = PlotNotebook(self, id=-1, pos=(100,100), size=(300,300))                
        axes = self.plotter.add(mode + "Hist").gca()
        axes.hist(data, range=[xmin, xmax], bins = bins)
        sigma = data.std()
        median = np.median(data)
        mu = data.mean()
        total = len(data)
        #dumb if statement to get units, improve?
        if mode == "Amplitude":
            modelabel = "Amplitude (mv)"
        elif mode == "Charge":
            modelabel = "Charge (C)"
        elif "Time" in mode:
            modelabel = mode + " (ns)"
        else:
            modelabel = mode

        axes.set_xlabel(modelabel)
        axes.set_ylabel("Number of Events")
        axes.set_title(title)
        props = dict(boxstyle='round', facecolor='wheat', alpha=0.5)
        
        string = '\n'.join((
        r'$\mu=%.2f$' % (mu, ),
        r'$\mathrm{median}=%.2f$' % (median, ),
        r'$\sigma=%.2f$' % (sigma, ),
        "n=%d" % total)) 


        if params != 1:
            for key in params:
                string += (key + ": " + params[key] + '\n') 

        axes.text(0.01, 0.95, string, transform = axes.transAxes, verticalalignment='top', bbox=props)   
        self.Show()


class PlotNotebook(wx.Panel):
    #This is the object that handles the plotting of data
    def __init__(self, parent, id, pos, size):
        wx.Panel.__init__(self, parent, id, pos, size)
        self.parent = parent
        self.nb = aui.AuiNotebook(self)
        #Create binding so that charecteristics change when the tab is changed
        sizer = wx.BoxSizer(wx.VERTICAL)
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



#def plotspectrum(histogram = df):
#    frame = Spectrumframe()
#    frame.InitFrame()
#    plotter = frame.panel



#plotspectrum()







