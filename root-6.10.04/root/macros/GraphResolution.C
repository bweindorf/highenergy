{
Double_t x[6];
Double_t ex[6];
Double_t y[6];
Double_t ey[6];
Double_t mz[6];
Double_t emz[6];
Double_t fwhm[6];
Double_t efwhm[6];

ifstream Inp;
Int_t nlines;
nlines=-1;
Inp.open("coords.dat");
// reading a text file
if (! Inp.is_open())
{ cout << "Error opening file"; exit (1); }
while (!Inp.eof()) {
  ++nlines;
Inp>>x[nlines]>>y[nlines]>>ey[nlines]>>ex[nlines]>>mz[nlines]>>emz[nlines];
fwhm[nlines]=(2.35*100*y[nlines])/mz[nlines];
efwhm[nlines]=fwhm[nlines]*sqrt((emz[nlines]/mz[nlines])*(emz[nlines]/mz[nlines]) + (ey[nlines]/y[nlines])*(ey[nlines]/y[nlines]));
cout<<x[nlines]<<" "<<fwhm[nlines]<<" "<<efwhm[nlines]<<endl;
if (!Inp.good()) break;
}
Inp.close();
TGraph *gr = new TGraphErrors(6, x,fwhm,ex,efwhm);
gr->SetLineColor(1);
gr->SetLineWidth(4);
gr->SetMarkerColor(1);
gr->SetMarkerStyle(20);
gr->SetMarkerSize(1);
//gr->SetTitle("FWHM% vs Gamma Energy (LYSO)");
gr->GetXaxis()->SetTitle("#bf{Energy (keV)}");
gr->GetYaxis()->SetTitle("(#bf{#DeltaE/E) %}");  
//g->SetMarkerColor(kBlue);
//g->SetMarkerStyle(21);
//gr->Draw("AP");
//tex = new TLatex(500.0,400.0,"ADC Count=11.0 + 0.32xEnergy(keV)");
//tex->SetLineColor(1);
//tex->Draw();
TF1 *f = new TF1("f", "sqrt(([0]*[0]/(x/1000))+[1]*[1])");
   f->SetFillColor(1);
   f->SetFillStyle(0);
   f->SetLineWidth(2);
  gr->Fit(f);
  gr->Draw("AP");
  //gr->GetListOfFunctions()->Add(f);
  // gr->Draw("ap");
 TLegend *leg = new TLegend(0.3994253,0.7004219,0.7988506,0.7805907,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#frac{8.7%}{#sqrt{E(MeV)}}#oplus1.7%","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
 //leg = new TLegend(0.4,0.7,0.8,0.78);
 //leg->AddEntry("f","#frac{5.9%}{#sqrt{E(MeV)}}","l");
 //leg->AddEntry("gr","#gamma sources","lep");
 //leg->SetLineSize(2);
 //leg->SetTextSize(0.035);
 //leg->Draw();

}
