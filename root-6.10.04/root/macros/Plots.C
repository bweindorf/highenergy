{

TFile* file = new TFile("Run_Light_28_5V_Ch1_tr_13mV_5mm_Fibers_milled_April_30_Large_Tank.root");


/*TH1D* hE3 = new TH1D("hE3","Pulse height distribution (energy)",50,0,0.2);
rec->Draw("a1>>hE3");
hE3->Draw();
*/


TH2D* vt3 = new TH2D("vt3","Waveforms",50,0.0,500,100,0.,0.2);
rec->Draw("w1:t3>>vt3");

vt3->Draw();





}
