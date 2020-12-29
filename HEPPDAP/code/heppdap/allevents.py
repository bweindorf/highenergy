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




class Alleventframe(wx.Frame):
    """
    Class used for creating frames other than the main one
    """

 #       app=wx.App(None)
    def __init__(self, data, channelnum):
        super().__init__(None)
        self.plotter = PlotNotebook(self, id=-1, pos=(100,100), size=(300,300))  
        axes = self.plotter.add("All Events for Channel %d" % (int(channelnum) + 1)).gca()
        i = 0
        while True:
            i += 1
            try:
                axes.plot(data.events[i][channelnum])
            except KeyError:
                break

        axes.set_xlabel("Time (ns)")
        axes.set_ylabel("Voltage (mV)")
        axes.set_title("Channel %d" % (int(channelnum) + 1))

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










