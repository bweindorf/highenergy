import wx
import re


class Channelnameframe (wx.Frame):
    """
    Class used for creating frames other than the main one
    """
    
    def __init__(self, title, matrix, filename, parent=None):
        wx.Frame.__init__(self, parent=parent, title=title)
        self.chanpanel = ChannelPanel(self, matrix, filename)
        self.Show()

    def getchannelnames(self):
        return self.chanpanel.channels

class ChannelPanel(wx.Panel):
    
    def __init__(self, parent, matrix, filename):
       self.parent = parent
       wx.Panel.__init__(self, parent)
       self.filename = filename
       self.build(matrix)

       self.channels = [["Channel 1", "Channel 2", "Channel 3", "Channel 4"], ["Channel 1", "Channel 2", "Channel 3", "Channel 4"]]

    def build(self, channelmatrix):
        channelsizer = wx.BoxSizer(wx.HORIZONTAL)
        board1sizer = wx.BoxSizer(wx.VERTICAL)
        board2sizer = wx.BoxSizer(wx.VERTICAL)
        self.boards = [board1sizer, board2sizer]


        for boardsizer, board  in zip(self.boards, channelmatrix):
            for chan in range(4):
                channel = wx.BoxSizer(wx.HORIZONTAL)
                label = wx.StaticText(self, label = "Channel %s" % str(chan + 1))
                if chan + 1 in board:
                    text = wx.TextCtrl(self, value = "", size = (100, 20))
                else:
                    text = wx.StaticText(self, id=wx.ID_ANY, label = "Channel Unavailable") 

                channel.Add(label, 0, wx.ALL|wx.EXPAND, 0)
                channel.Add(text, 0, wx.ALL|wx.EXPAND, 0)
                boardsizer.Add(channel, 0, wx.ALL, 0)
            channelsizer.Add(boardsizer, 0, wx.ALL, 0)

        ok = wx.Button(self, wx.ID_ANY, "OK")
        smart = wx.Button(self, wx.ID_ANY, "Try Automatic")
        self.Bind(wx.EVT_BUTTON, self.smartread, smart)
        self.Bind(wx.EVT_BUTTON, self.closeout, ok)
        self.Bind(wx.EVT_CLOSE, self.closeout)
        channelsizer.Add(smart, 0, wx.ALL|wx.EXPAND|wx.ALIGN_BOTTOM|wx.ALIGN_RIGHT, 0)
        channelsizer.Add(ok, 0, wx.ALL|wx.EXPAND|wx.ALIGN_BOTTOM|wx.ALIGN_RIGHT, 0)
        self.SetSizer(channelsizer)
         
    
    def closeout(self, event):
        self.channels = [[],[]]
        b = 0
        c = 0
        for board in self.boards:
            for channel in board:
                text = channel.GetSizer().GetChildren()[1].GetWindow()
                if isinstance(text, wx.TextCtrl):
                    if text.GetValue() != "":
                        self.channels[b].append(text.GetValue())
                    else:
                        self.channels[b].append ("Channel %s" % str(c + 1))

                else:
                    self.channels[b].append("Channel Unavailable")
                c += 1
            b += 1

        self.parent.Destroy() 

    def smartread(self, event):
        m = re.findall('ch(\d?)_(.+?)_', self.filename, re.DOTALL)
        for tup in m:
            self.boards[0].GetChildren()[int(tup[0]) - 1].GetSizer().GetChildren()[1].GetWindow().SetValue(tup[1])
