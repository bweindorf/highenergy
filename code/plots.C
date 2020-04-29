{

TFile* file = new TFile("file.root");


TH1D* hE3 = new TH1D("hE3","Pulse Height Distribution No Water",50,0,0.02);
rec->Draw("amplitude3>>hE3");
hE3->Draw();

/*
TH2D* vt3 = new TH2D("vt3","Waveforms for ch3",50,0.0,500,100,0.,0.2);
rec->Draw("w3:t3>>vt3");

vt3->Draw();
*/

}
