#stats file 

    
from scipy import integrate
import numpy as np
import pandas as pd


class Characteristics:
    def __init__(self,series):
        self.series = series
        self._peak_time = None
        self._rise_time = None

    @staticmethod
    def moving_avg(series):
        return series.rolling(20).mean()
    
    def charge(self):
        return self.series.integrate()/50

    def amplitude(self):
        return self.series[self.peak_time()]

    def peak_time(self):
        if not self._peak_time:
            self._peak_time = self.series.idxmax()
        return self._peak_time

    def rise_time(self, threshold = .1):
        if self._rise_time:
            return self._rise_time
        self.series
        abs_threshold = self.amplitude() * threshold
        rise_moment = (self.series > abs_threshold).idxmax()
        rise_val = self.series[rise_moment]
        time_index = self.series.index
        prev_moment = time_index[time_index.get_loc(rise_moment) - 1]
        prev_val = self.series[prev_moment]
        rise_time = prev_moment + (abs_threshold - prev_val) * (rise_moment - prev_moment) / (rise_val - prev_val)
        # print(rise_moment, time_index.get_loc(rise_moment))
        # print(self.series[rise_moment], self.series.at[rise_moment], self.series.iat[time_index.get_loc(rise_moment)])
        # print(abs_threshold, rise_moment, rise_val, prev_moment, prev_val, rise_time)
        # exit(0)
        return rise_time

class Stats:
    def __init__(self, data_stats):
        self.data_stats = data_stats
    def amplitude_freq(self, channel):
        amps = self.data_stats['single_channel'][channel]['amplitude']
        amps = amps[amps<.15]
        return amps.value_counts(
            normalize= True,
            sort= False,
            bins=250
        )
    def time_resolution(self, chn_1,chn_2):
        time_diff = (
            self.data_stats['single_channel'][chn_1]['rise_time']
            - self.data_stats['single_channel'][chn_2]['rise_time']
        )
        return time_diff.value_counts(
            normalize= True,
            sort= False,
            bins=250
        )


def process_single_channel_per_event_channel(time_series, processors):
    for processor in processors:
        time_series = Characteristics.__dict__[processor].__get__(Characteristics([]))(time_series)
    
    return time_series
    

# Need to add baseline adjust
def calc_stats_single_channel(
    event_series,
    processors = ['moving_avg'],
    stats = ['peak_time', 'amplitude', 'rise_time', 'charge' ]
):
    
    new_events = event_series.map(
        lambda event: event.map(
            lambda time_series:process_single_channel_per_event_channel(time_series, processors)
        )
    )

    stat_dict = pd.Series([ {
        stat: [] for stat in stats
    } for channel in event_series[0]], index=event_series[0].index)
    for event in new_events:
        for channel, channel_event in event.items():
            for stat in stats:
                stat_calculator = Characteristics(channel_event)
                stat_dict[channel][stat].append(
                    stat_calculator.__getattribute__(stat)()
                )
    for channel, channel_event in event.items():
        for stat in stats:
            stat_dict[channel][stat] = pd.Series(stat_dict[channel][stat])
    
    return stat_dict


def integrate_method(self, how='trapz', unit='s'):
    '''Numerically integrate the time series.

    @param how: the method to use (trapz by default)
    @return 

    Available methods:
     * trapz - trapezoidal
     * cumtrapz - cumulative trapezoidal
     * simps - Simpson's rule
     * romb - Romberger's rule

    See http://docs.scipy.org/doc/scipy/reference/integrate.html for the method details.
    or the source code
    https://github.com/scipy/scipy/blob/master/scipy/integrate/quadrature.py
    '''
    available_rules = set(['trapz', 'cumtrapz', 'simps', 'romb'])
    if how in available_rules:
        rule = integrate.__getattribute__(how)
    else:
        print('Unsupported integration rule: %s' % (how))
        print('Expecting one of these sample-based integration rules: %s' % (str(list(available_rules))))
        raise AttributeError
    
    result = rule(self.values, self.index.astype(np.int64) / 10**9)
    #result = rule(self.values)
    return result

pd.Series.integrate = integrate_method
