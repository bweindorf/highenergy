import re

name = "dark_nowater_nofibers_nocrystal_ch1_Top_ch2_Bottom_ch3_SiPM_ch1tr_10mV_ch2tr_10mV_clean_opamp.dat"

def parsefilename(name):
    configname = name.split("_")

    if configname[0] == "run":
        del configname[0]

    mode = configname[0]

    if mode == "dark" or mode == "light":
        try:
            water = configname[1]
            fibers = configname[2]
            crystal = configname[3]
        except IndexError:
            return 1
        m = re.findall('ch(\d?)tr_(.+?)_', name, re.DOTALL)
        parsedinfo = dict(Mode=mode, Water = water, Fibers = fibers, Crystal = crystal)
        for tup in m:
            parsedinfo["Ch%s Trig" % (tup[0])] = tup[1]

        return(parsedinfo)

    else:
        return(1)
