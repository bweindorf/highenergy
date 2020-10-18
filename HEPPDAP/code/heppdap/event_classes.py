from struct import unpack
import numpy as np
import pandas as pd
# from heppdap.stats import calc_stats_single_channel, Stats

def init(editmode):
    global stats

    if editmode:
        import stats

    else:
        import heppdap.stats as stats
 
class DrsoscEventStream(object):
    def __init__(self):
        self.events = []
        self.stats = {}
    
    @staticmethod
    def new_event():
        return DrsoscEvent()

    def complete(self):
        self.events = pd.Series(self.events)

    def channel(self, chn_i):
        return self.events.map(lambda event: event[chn_i])

    def calc_stats(self):
        self.stats['single_channel'] = stats.calc_stats_single_channel(self.events)
        self.stats['freq'] = stats.Stats(self.stats)
        return self.stats
        

class DrsoscEvent(object):
    def __init__(self): # , event_id, event_time):
        # self.event_id = event_id
        # self.event_time = event_time
        self.boards = []
        self.event = None
        self.channel_index = []
        self.channel_data = []
        
    def add_channel(self, chn_i, time, wave):
        self.channel_index.append(chn_i)
        self.channel_data.append(pd.Series(wave, time))
    def complete(self):
        return pd.Series(self.channel_data, self.channel_index)


class DrsoscBoard(object):
    def __init__(self, board_serial):
        self.board_id = unpack(b'H', board_serial)[0]

    @property
    def trigger_cell(self):
        return self._trigger_cell

    @trigger_cell.setter
    def trigger_cell(self, value):
        self._trigger_cell = value

    def __eq__(self, other):
        return self.board_id == other.board_id
    def __repr__(self):
        return str(self.board_id)
    # def __array__(self):
    #     return self.


class DrsoscChannel(object):
    def __init__(self):
        self.boards = np.array()
        self.time = np.zeros(1024, dtype=np.float32)
        self.waveform = np.zeros(1024, dtype=np.float32)
