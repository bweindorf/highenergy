#stats file 

    
from scipy import integrate
import numpy as np
import pandas as pd


class Stats:
    def __init__(self,series):
        self.series = series
        self._peak_time = None

    @staticmethod
    def moving_avg(series):
        return series.rolling(20).mean()

    @property
    def peak(self):
        pass
        # if not self._peak:
        #     self._peak = self.series.max()
        # return self._peak
    
    def charge(self):
        return self.series.integrate()/50

    def amplitude(self):
        return self.series[self.peak_time()]

    def peak_time(self):
        if not self._peak_time:
            self._peak_time = self.series.idxmax()
        return self._peak_time

    # def rise_time(self):


def process_single_channel_per_event_channel(time_series, processors):
    for processor in processors:
        time_series = Stats.__dict__[processor].__get__(Stats([]))(time_series)
    
    return time_series
    

# Need to add baseline adjust
def calc_stats_single_channel(
    event_series,
    processors = ['moving_avg'],
    stats = ['peak_time', 'amplitude']
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
                stat_calculator = Stats(channel_event)
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
