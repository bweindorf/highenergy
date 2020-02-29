#stats file 

import numpy as np
import pandas as pd


class Stats:
    def __init__(series):
        self.series = series

    @staticmethod
    def moving_avg(series):
        return series.rolling(20).mean()

    @property
    def peak(self):
        if self._peak:
            return self._peak
        self._peak = self.series.max()

    def peak_time(self):
        return self.series.idxmax()

def process_single_channel_per_event_channel(time_series, processors):
    for processor in processors:
        print(Stats.__dict__[processor].__get__(Stats()))
        time_series = Stats.__dict__[processor].__get__(Stats())(time_series)
    
    return time_series
    

def calc_stats_single_channel(event_series, processors = ['moving_avg'], stats = ['peak_time']):
    
    new_events = event_series.map(
        lambda event: event.map(
            lambda time_series:process_single_channel_per_event_channel(time_series, processors)
        )
    )

    stat_dict = [ {
        stat: [] for stat in stats
    } for channel in event_series[0]]
    for event in new_events:
        for channel, channel_event in event.items():
            for stat in stats:
                stat_calculator = Stats(channel_event)
                stat_dict[channel][stat].append(
                    stat_calculator.__getattribute__(stat)
                )
    
    return stat_dict
            


# class EventStats(object):
#     def __init__(self, event, processors = [moving_avg]):
#         for processor in processors:
#             event = processor(event)
#         self.event = event
#         single_channel

#     def rise_time():
        
#         for i = 0, i < N_BINS - 2, i ++:
#                 if ((channel_waveform(i) < PEAK_THRESHOLD)
#                     and channel_waveform(i+1) >= PEAK_THRESHOLD):
                    
#                     return (
#                         (PEAK_THRESHOLD - channe_waveform(i))
#                         / (channel_waveform(i + 1) - channel_waveform(i))
#                         * (channel_time(i+1) -channel_time(i))
#                         ) + channel_time(i)
                
#             return std global numeric_limits
    
# # assumes curve has been smoothed.

# def peak_time(wave(N_BINS), time(N_BINS)):
    
#     max_dertime = 0
#     max_derivative = 0
    
#     def derivatives(N_BINS):
#         for i in range(0, N_BINS - 1, i ++)
#             derivatives(i) = (wave(i + 1) - wave(i)) / (time(i + 1) - time(i))
    
#     if ( i >= 9 ):
        
#         def avg_derivative = 0
#         for (j = 0, j < 10, j++):
#             avg_derivative += derivatives(i - j)
#         if (max_derivative < avg_derivative):
#             max_derivative = avg_derivative
#             max_dertime = time(i - 4)

#             return max_dertime 


# def amplitude(channel_waveform(N_BINS)):

#         # find baseline for channel to get amplitude for that channel         sum_ = 0.0
#         for i in range(0, i < 10, i++):

#             sum_ += channel_waveform(i)
            
#         baseline = sum_/10

#         # find amplitude for channel

#         max_ = -10000.0
#         for i in range(0, i < N_BINS - 2, i++):
#             if (channel_waveform(i) > max_):
#                 max_ = channel_waveform(i)


#         return max_

# def charge(channel_waveform(N_BINS), channel_time(N_BINS)):

#     # performs Reimann sum

#     sum_ = 0.0
#     for i in range(0, i < N_BINS - 2, i++):
#         sum_ += (channel_waveform(i) + channel_waveform(i + 1)) * (channel_time(i) + channel_time(i + 1)) / 2

#     return sum_ / RESISTANCE 


    
