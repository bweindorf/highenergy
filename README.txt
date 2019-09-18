Here are the steps to get to the data analysis of DRS4 Data acuqisition acquired from particle detectors

1) Install Ubuntu (the latest stable version is I believe 18.04), you can install it as standalone or using the free VMware player within windows or mac
-
2) Install ROOT CERN, see this tutorial:
   http://techforcurious.website/cern-root-installation-ubuntu-18-04-enabling-libraries/
  
3) Install DRS4 Data acquisition software from (download the latest version drs-05.0.6):
   https://www.psi.ch/drs/software-download
  Once unpacked 
   execute:  make 
   you might need wxwidget library (see how to install that on your machine)

4)  This is the main analysis code, reads the binary data file produced from drsosc and upackes it in root data structures called trees, the description below shows how to run this code, to unpack a sample data which has output only on channel three
 Steps:
  execute: root
  when in root prompt execute: .L read_binary.C+             
  (ignore the warnings)
  execute within root next: decode("Run_Light_29_5V_5mV_10mV_4_2mm_Fibers.dat");
  exit root prompt using: .q

5) execute: root Plots.C    (you should see a collection of waveforms )
   if within root you do: hE3->Draw();
    a histogram of pulse heights for channel three will show up
   

You are on track to develop C++ skills and perform data analysis like the PROS, keep working at it.
