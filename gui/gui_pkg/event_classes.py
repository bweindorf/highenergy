from struct import unpack
import numpy as np


class DrsoscEventStream(object):
    def __init__(self):
        self.events = []
    # def __array__(self):
    #     return self.events

    @staticmethod
    def new_event():
        return DrsoscEvent()


    # @property
    # def trigger_cell(self):
    #     if(not self.board):
    #         raise Exception("Board not set")
    #     if(not self.board.trigger_cell):
    #         raise Exception("Trigger cell not set")
    #     return self.board.trigger_cell

    # @property
    # def timebins(self):
    #     return self._timebins

    # @timebins.setter
    # def timebins(self, value):
    #     return list(roll(timebins[chn_i-1], -tcell))+list(roll(timebins[chn_i-1], -tcell))

    def __repr__(self):
        return """
Event Stream:
 - Board: {}
 - Channel: {}
 - Events: {}
 - Timebins: {}
""".format(self.board, self.channel_id, self.events, self.timebins)

class DrsoscEvent(object):
    def __init__(self): # , event_id, event_time):
        # self.event_id = event_id
        # self.event_time = event_time
        self.boards = []
        self.event = np.zeros((16, 2, 1024), dtype=np.float32) # (channel, (time or waveform), bin)


class DrsoscBoard(object):
    def __init__(self, board_serial):
        self.board_id = unpack(b'H', board_serial)[0]

    @property
    def trigger_cell(self):
        return self._trigger_cell

    @trigger_cell.setter
    def trigger_cell(self, value):
        self._trigger_cell = value;

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
