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
 #       print(self.series.integrate()/50)
        return self.series.integrate()/50

    def amplitude(self):
       # return self.series[self.peak_time()]
        return np.nanmax(self.series.values)

    def peak_time(self):
        if not self._peak_time:
            self._peak_time = self.series.idxmax()
            #print(self.series[self._peak_time])
        return self._peak_time

    def rise_time(self, threshold = .1):
        if self._rise_time:
            return self._rise_time
        #self.series
        abs_threshold = self.amplitude() * threshold
        voltage = self.amplitude()
        time_index = np.where(self.series.index.values == self.peak_time())[0][0]
        try:
            while voltage > abs_threshold:
                time_index = time_index - 1
                voltage = self.series.values[time_index]

            return self.series.index.values[time_index]

        except IndexError:
            return "Null"

    def fall_time(self, threshold = .1):
        try:
            if self._rise_time:
                return self._rise_time
        #self.series
            abs_threshold = self.amplitude() * threshold
            voltage = self.amplitude()
            time_index = np.where(self.series.index.values == self.peak_time())[0][0]
            while voltage > abs_threshold:
                time_index = time_index + 1
                voltage = self.series.values[time_index]

            return self.series.index.values[time_index]
        except IndexError:
            return "Null"



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
    stats = ['peak_time', 'amplitude', 'rise_time', 'charge', 'fall_time' ]
):
    
#    new_events = event_series.map(
#        lambda event: event.map(
#            lambda time_series:process_single_channel_per_event_channel(time_series, processors)
#        )
#    )

    stat_dict = pd.Series([ {
        stat: [] for stat in stats
    } for channel in event_series[0]], index=event_series[0].index)
    for event in event_series:
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
