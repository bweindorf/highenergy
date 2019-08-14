{

TFile* file = new TFile("Run_Light_30V_Ch1_4_2mm_Fibers_April_9_Large_Tank.root");


/*TH1D* hE3 = new TH1D("hE3","Pulse height distribution (energy)",50,0,0.2);
rec->Draw("amplitude3>>hE3");
hE3->Draw();
*/

TH2D* vt3 = new TH2D("vt3","Waveforms for 4 2mm Fibers in Large Tank",50,0.0,500,100,0.,0.2);
rec->Draw("w1:t3>>vt3");

vt3->Draw();



}
