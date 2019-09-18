{

TFile* file = new TFile("datfiles/Run_Light_29_5V_5mV_10mV_4_2mm_Fibers.root");


TH1D* hE3 = new TH1D("hE3","Pulse height distribution (energy)",50,0,0.2);
rec->Draw("amplitude3>>hE3");
hE3->Draw();

/*
TH2D* vt3 = new TH2D("vt3","Waveforms for ch3",50,0.0,500,100,0.,0.2);
rec->Draw("w3:t3>>vt3");

vt3->Draw();

*/

}
