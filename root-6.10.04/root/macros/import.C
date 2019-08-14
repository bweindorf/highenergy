


void graph() {
    TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",200,10,700,500);

    c1->SetGrid();


#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>

std::ifstream infile("coords.dat");
std::string str;
std::string file_contents;



//Double_t x[0], y[0];
int a, b;
char c;
Int_t n=0;
std::vector<double> x;
std::vector<double> y;


while (std::getline(infile, str))
{
    std::stringstream ss(str);

    int i;

    while (ss >> i)
    {
        
    file_contents += str
    
    file_contents.push_back('\n')
}
    

    /*Int_t n = 20;
    Double_t x[n], y[n];
    for (Int_t i=0; i<n; i++) {
        x[i] = i;
        y[i] = i;
    }    
*/

// create graph
    TGraph *gr = new TGraph(n, x, y);
    gr->SetLineColor(2);
    gr->SetLineWidth(4);
    gr->SetMarkerColor(4);
    gr->SetMarkerStyle(21);
    gr->SetTitle("Here we go");
    gr->GetXaxis()->SetTitle("X Title");
    gr->GetYaxis()->SetTitle("Y Title");
    gr->Draw("ACP");


    c1->Update();
    c1->GetFrame()->SetBorderSize(12);
    c1->Modified();
}
