{

TFile* file = new TFile("Run_Light_29_5V_5mV_10mV_4_2mm_Fibers.root");


TH1D* hE3 = new TH1D("hE3","Pulse height distribution (energy)",50,0,0.2);
rec->Draw("amplitude3>>hE3");
hE3->Draw();

TH1D* hE4 = new TH1D("hE4","Charge3",50,0,100);
rec->Draw("charge1>>hE4");
hE4->Draw();

TH1D* hE5 = new TH1D("hE5","Rise Time 3",50,0,.2);
rec->Draw("rise_time3>>hE5");
hE5->Draw();


// TH2D* vt3 = new TH2D("vt3","Waveforms for ch3",50,0.0,500,100,0.,0.2);
// rec->Draw("w3:t3>>vt3");
//
// vt3->Draw();



}
