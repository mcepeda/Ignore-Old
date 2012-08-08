
setStyle()
{
  TStyle *tdrStyle = new TStyle("tdrStyle", "Style for P-TDR");

// // For the canvas:
//   tdrStyle->SetCanvasBorderMode(0);
//   tdrStyle->SetCanvasColor(kWhite);
//   tdrStyle->SetCanvasDefH(600); //Height of canvas
//   tdrStyle->SetCanvasDefW(600); //Width of canvas
//   tdrStyle->SetCanvasDefX(0);   //POsition on screen
//   tdrStyle->SetCanvasDefY(0);

// // For the Pad:
//   tdrStyle->SetPadBorderMode(0);
//   // tdrStyle->SetPadBorderSize(Width_t size = 1);
//   tdrStyle->SetPadColor(kWhite);
//   tdrStyle->SetPadGridX(false);
//   tdrStyle->SetPadGridY(false);
//   tdrStyle->SetGridColor(0);
//   tdrStyle->SetGridStyle(3);
//   tdrStyle->SetGridWidth(1);

// // For the frame:
//   tdrStyle->SetFrameBorderMode(0);
//   tdrStyle->SetFrameBorderSize(1);
//   tdrStyle->SetFrameFillColor(0);
//   tdrStyle->SetFrameFillStyle(0);
//   tdrStyle->SetFrameLineColor(1);
//   tdrStyle->SetFrameLineStyle(1);
//   tdrStyle->SetFrameLineWidth(1);



// // For the histo:
//   // tdrStyle->SetHistFillColor(1);
//   // tdrStyle->SetHistFillStyle(0);
//   tdrStyle->SetHistLineColor(1);
//   tdrStyle->SetHistLineStyle(0);
//   tdrStyle->SetHistLineWidth(1);
//   // tdrStyle->SetLegoInnerR(Float_t rad = 0.5);
//   // tdrStyle->SetNumberContours(Int_t number = 20);

//   tdrStyle->SetEndErrorSize(2);
//   //tdrStyle->SetErrorMarker(20);
//   //  tdrStyle->SetErrorX(0.);

//   tdrStyle->SetMarkerStyle(20);

// //For the fit/function:
//   tdrStyle->SetOptFit(1);
//   tdrStyle->SetFitFormat("5.4g");
//   tdrStyle->SetFuncColor(2);
//   tdrStyle->SetFuncStyle(1);
//   tdrStyle->SetFuncWidth(1);

// //For the date:
//   tdrStyle->SetOptDate(0);
//   // tdrStyle->SetDateX(Float_t x = 0.01);
//   // tdrStyle->SetDateY(Float_t y = 0.01);

// // For the statistics box:
//   tdrStyle->SetOptFile(0);
//   tdrStyle->SetOptStat(0); // To display the mean and RMS:   SetOptStat("mr");
//   tdrStyle->SetStatColor(kWhite);
//   tdrStyle->SetStatFont(42);
//   tdrStyle->SetStatFontSize(0.025);
//   tdrStyle->SetStatTextColor(1);
//   tdrStyle->SetStatFormat("6.4g");
//   tdrStyle->SetStatBorderSize(1);
//   tdrStyle->SetStatH(0.1);
//   tdrStyle->SetStatW(0.15);
//   // tdrStyle->SetStatStyle(Style_t style = 1001);
//   // tdrStyle->SetStatX(Float_t x = 0);
//   // tdrStyle->SetStatY(Float_t y = 0);

// // Margins:
//   tdrStyle->SetPadTopMargin(0.05);
//   tdrStyle->SetPadBottomMargin(0.13);
//   tdrStyle->SetPadLeftMargin(0.15);
//   tdrStyle->SetPadRightMargin(0.05);

// // For the Global title:

// //  tdrStyle->SetOptTitle(0);
//   tdrStyle->SetTitleFont(42);
//   tdrStyle->SetTitleColor(1);
//   tdrStyle->SetTitleTextColor(1);
//   tdrStyle->SetTitleFillColor(10);
//   tdrStyle->SetTitleFontSize(0.05);
//   // tdrStyle->SetTitleH(0); // Set the height of the title box
//   // tdrStyle->SetTitleW(0); // Set the width of the title box
//   // tdrStyle->SetTitleX(0); // Set the position of the title box
//   // tdrStyle->SetTitleY(0.985); // Set the position of the title box
//   // tdrStyle->SetTitleStyle(Style_t style = 1001);
//   // tdrStyle->SetTitleBorderSize(2);

// // For the axis titles:

//   tdrStyle->SetTitleColor(1, "XYZ");
//   tdrStyle->SetTitleFont(42, "XYZ");
//   tdrStyle->SetTitleSize(0.05, "XYZ");
//   // tdrStyle->SetTitleXSize(Float_t size = 0.02); // Another way to set the size?
//   // tdrStyle->SetTitleYSize(Float_t size = 0.02);
//   tdrStyle->SetTitleXOffset(1.0);
// //   tdrStyle->SetTitleYOffset(1.5);
//   tdrStyle->SetTitleOffset(1.5, "Y"); // Another way to set the Offset

// // For the axis labels:

//   tdrStyle->SetLabelColor(1, "XYZ");
//   tdrStyle->SetLabelFont(42, "XYZ");
//   tdrStyle->SetLabelOffset(0.007, "XYZ");
//   tdrStyle->SetLabelSize(0.05, "XYZ");

// // For the axis:

//   tdrStyle->SetAxisColor(1, "XYZ");
//   tdrStyle->SetStripDecimals(kTRUE);
//   tdrStyle->SetTickLength(0.03, "XYZ");
//   tdrStyle->SetNdivisions(505, "XYZ");
//   tdrStyle->SetPadTickX(1);  // To get tick marks on the opposite side of the frame
//   tdrStyle->SetPadTickY(1);

// // Change for log plots:
//   tdrStyle->SetOptLogx(0);
//   tdrStyle->SetOptLogy(0);
//   tdrStyle->SetOptLogz(0);

//   tdrStyle->SetPalette(1,0);

// Postscript options:
  // tdrStyle->SetPaperSize(15.,15.);
  // tdrStyle->SetLineScalePS(Float_t scale = 3);
  // tdrStyle->SetLineStyleString(Int_t i, const char* text);
  // tdrStyle->SetHeaderPS(const char* header);
  // tdrStyle->SetTitlePS(const char* pstitle);

  // tdrStyle->SetBarOffset(Float_t baroff = 0.5);
  // tdrStyle->SetBarWidth(Float_t barwidth = 0.5);
  // tdrStyle->SetPaintTextFormat(const char* format = "g");
  // tdrStyle->SetPalette(Int_t ncolors = 0, Int_t* colors = 0);
  // tdrStyle->SetTimeOffset(Double_t toffset);
  // tdrStyle->SetHistMinimumZero(kTRUE);

  // Canvas
  tdrStyle->SetCanvasColor     (0);
  tdrStyle->SetCanvasBorderSize(10);
  tdrStyle->SetCanvasBorderMode(0);
  tdrStyle->SetCanvasDefH      (700);
  tdrStyle->SetCanvasDefW      (700);
  tdrStyle->SetCanvasDefX      (100);
  tdrStyle->SetCanvasDefY      (100);

  // color palette for 2D temperature plots
  tdrStyle->SetPalette(1,0);
  
  // Pads
  tdrStyle->SetPadColor       (0);
  tdrStyle->SetPadBorderSize  (10);
  tdrStyle->SetPadBorderMode  (0);
  tdrStyle->SetPadBottomMargin(0.15);
  tdrStyle->SetPadTopMargin   (0.05);
  tdrStyle->SetPadLeftMargin  (0.18);
  tdrStyle->SetPadRightMargin (0.07);
  tdrStyle->SetPadGridX       (0);
  tdrStyle->SetPadGridY       (0);
  tdrStyle->SetPadTickX       (1);
  tdrStyle->SetPadTickY       (1);

  // Frames
  tdrStyle->SetLineWidth(3);
  tdrStyle->SetFrameFillStyle ( 0);
  tdrStyle->SetFrameFillColor ( 0);
  tdrStyle->SetFrameLineColor ( 1);
  tdrStyle->SetFrameLineStyle ( 0);
  tdrStyle->SetFrameLineWidth ( 2);
  tdrStyle->SetFrameBorderSize(10);
  tdrStyle->SetFrameBorderMode( 0);

  // Histograms
  tdrStyle->SetHistFillColor(2);
  tdrStyle->SetHistFillStyle(0);
  tdrStyle->SetHistLineColor(1);
  tdrStyle->SetHistLineStyle(0);
  tdrStyle->SetHistLineWidth(3);
  tdrStyle->SetNdivisions(505);

  // Functions
  tdrStyle->SetFuncColor(1);
  tdrStyle->SetFuncStyle(0);
  tdrStyle->SetFuncWidth(2);

  // Various
  tdrStyle->SetMarkerStyle(20);
  tdrStyle->SetMarkerColor(kBlack);
  tdrStyle->SetMarkerSize (1.4);

  tdrStyle->SetTitleBorderSize(0);
  tdrStyle->SetTitleFillColor (0);
  tdrStyle->SetTitleX         (0.2);

  tdrStyle->SetTitleSize  (0.055,"X");
  tdrStyle->SetTitleOffset(1.200,"X");
  tdrStyle->SetLabelOffset(0.005,"X");
  tdrStyle->SetLabelSize  (0.050,"X");
  tdrStyle->SetLabelFont  (42   ,"X");

  tdrStyle->SetStripDecimals(kFALSE);

  tdrStyle->SetTitleSize  (0.055,"Y");
  tdrStyle->SetTitleOffset(1.600,"Y");
  tdrStyle->SetLabelOffset(0.010,"Y");
  tdrStyle->SetLabelSize  (0.050,"Y");
  tdrStyle->SetLabelFont  (42   ,"Y");

  tdrStyle->SetTextSize   (0.055);
  tdrStyle->SetTextFont   (42);

  tdrStyle->SetStatFont   (42);
  tdrStyle->SetTitleFont  (42);
  tdrStyle->SetTitleFont  (42,"X");
  tdrStyle->SetTitleFont  (42,"Y");

  tdrStyle->SetOptStat    (0);
  tdrStyle->SetLineStyleString(11,"20 10");


  tdrStyle->cd();
}


void applyStyle(TH1F* h, Color_t fill, Color_t line,int fillStyle)
{
  h->SetFillColor(fill);
  h->SetLineColor(line);
  h->SetLineWidth(2);
  h->SetFillStyle(fillStyle);
}


void applySignalStyle(TH1F* h)
{
  h->SetFillStyle(0);
  h->SetLineWidth(3);
  h->SetLineColor(kBlue+3);
  h->SetLineStyle(11);
}


void applyDATAStyle(TH1F* h)
{
  h->SetMarkerStyle(20.);
  h->SetMarkerSize (1.3);
  h->SetLineWidth  ( 3.);

}

void convertToDNDM(TH1F* histo) {
  for(int i=1;i<=histo->GetNbinsX();++i) {
    histo->SetBinContent(i,histo->GetBinContent(i)/histo->GetXaxis()->GetBinWidth(i));
    histo->SetBinError(i,histo->GetBinError(i)/histo->GetXaxis()->GetBinWidth(i));
  }
}



makeLTauStack(TString name,TString file,TString dir,int s,TString labelX,TString units = "GeV",bool left=false,TString channel = "",bool log = false,bool dndm=false,bool doRatio = false)
{
  setStyle();

  float xR=0.45;
  if(left)
    xR=0.2;


  if(doRatio){
  	TCanvas * c = new TCanvas(name,name,600,600);
  }
  else{
  	TCanvas * c = new TCanvas(name,name,600,600);
    c->SetLeftMargin     (0.18);
    c->SetRightMargin    (0.05);
    c->SetTopMargin      (0.08);
    c->SetBottomMargin   (0.15);
  }



  c->cd();
  
  if(doRatio){
  	TPad * plotPad = new TPad("pad1","",0.0,0.3,1.0,1.0);
  	plotPad->SetLeftMargin  (0.18);
    plotPad->SetTopMargin   (0.10);
    plotPad->SetRightMargin (0.07);
    plotPad->SetBottomMargin(0.03); 
    TPad * ratioPad = new TPad("pad2","",0.0,0.0,1.0,0.3);
    ratioPad->SetLeftMargin  (0.18);
    ratioPad->SetTopMargin   (0.00);
    ratioPad->SetRightMargin (0.07);
    ratioPad->SetBottomMargin(0.30);
    ratioPad->SetGridy(1);
  }
  else{
  	TPad * plotPad = new TPad("pad1","",0.0,0.0,1.0,1.0);
  	plotPad->SetLeftMargin     (0.18);
    plotPad->SetRightMargin    (0.05);
    plotPad->SetTopMargin      (0.08);
    plotPad->SetBottomMargin   (0.15);
  }
  
  plotPad->Draw();
  plotPad->cd();
  
  
  TFile *f = new TFile(file);


  TH1F * data = (TH1F*)(f->Get(dir+"/data_obs"));
  if (dndm) convertToDNDM(data);

  applyDATAStyle(data);

  TH1F * QCD = (TH1F*)(f->Get(dir+"/QCD"));
  if (dndm) convertToDNDM(QCD);

  applyStyle(QCD,kMagenta-10,1,1001);

  TH1F * ttbar = (TH1F*)(f->Get(dir+"/TT"));
  if (dndm) convertToDNDM(ttbar);
  applyStyle(ttbar,kBlue-8,1,1001);

  TH1F * EWK = (TH1F*)(f->Get(dir+"/W"));
  if(f->Get(dir+"/ZL")!=0)
    EWK->Add((TH1F*)(f->Get(dir+"/ZL")),1.);
  if(f->Get(dir+"/ZJ")!=0)
    EWK->Add((TH1F*)(f->Get(dir+"/ZJ")));
  if(f->Get(dir+"/ZLL")!=0)
    EWK->Add((TH1F*)(f->Get(dir+"/ZLL")));
  EWK->Add((TH1F*)(f->Get(dir+"/VV")));

  if (dndm) convertToDNDM(EWK);
  applyStyle(EWK,kRed+2,1,1001);

  TH1F * ZTT = (TH1F*)(f->Get(dir+"/ZTT"));
  if (dndm) convertToDNDM(ZTT);
  applyStyle(ZTT,kOrange-4,kBlack,1001);

  TH1F *signal=0;

  if(s==1) {
    TH1F * MSSM = (TH1F*)(f->Get(dir+"/GGH120"));
    MSSM->Scale(11.22);
    TH1F * MSSM2 = (TH1F*)(f->Get(dir+"/BBH120"));
    MSSM2->Scale(16.);
    MSSM->Add(MSSM2);
    MSSM->SetLineStyle(11);

    signal=MSSM;
  if (dndm) convertToDNDM(signal);

    applySignalStyle(signal);

  }
  else if(s==2) {
    TH1F * MSSM = (TH1F*)(f->Get(dir+"/GGHNoJet120"));
    MSSM->Add((TH1F*)(f->Get(dir+"/GGHJet120")));
    MSSM->Scale(11.22);
    TH1F * MSSM2 = (TH1F*)(f->Get(dir+"/BBHNoJet120"));
    MSSM2->Add((TH1F*)(f->Get(dir+"/BBHJet120")));
    MSSM2->Add((TH1F*)(f->Get(dir+"/BBHBJet120")));
    MSSM2->Scale(16.);
    MSSM->Add(MSSM2);
    MSSM->SetLineStyle(11);
    signal=MSSM;
  if (dndm) convertToDNDM(signal);

    applySignalStyle(signal);

  }
  else if(s==3) {
    TH1F * SM = (TH1F*)(f->Get(dir+"/SM120"));
    TH1F * SM2 = (TH1F*)(f->Get(dir+"/VBF120"));
    TH1F * SM3 = (TH1F*)(f->Get(dir+"/VH120"));
    SM->Add(SM2);
    SM->Add(SM3);
    SM->SetLineStyle(11);
    signal=SM;
    signal->Scale(5.0);
  if (dndm) convertToDNDM(signal);

    applySignalStyle(signal);
  }


  THStack *hs = new THStack("hs","");
  TLegend *l = new TLegend(xR,0.6,xR+0.5,0.9);

  l->AddEntry(data,"Observed","P");
<<<<<<< makePlot.C
  if(s>0&&s<3)
    l->AddEntry(signal,"#phi#rightarrow #tau #tau(m_{A}=120 GeV,tan#beta=20)","F");
  else if(s==3)
    l->AddEntry(signal,"5 #times SM H(120) #rightarrow #tau #tau","F");
=======
  
  if(log){
	  if(s<3)
		l->AddEntry(signal,"#phi#rightarrow #tau #tau(m_{A}=120 GeV,tan#beta=20)","L");
	  else if(s==3)
		l->AddEntry(signal,"5 #times SM H(120) #rightarrow #tau #tau","L");
  }
  else{
	  if(s<3)
		l->AddEntry(signal,"#phi#rightarrow #tau #tau(m_{A}=120 GeV,tan#beta=20)","F");
	  else if(s==3)
		l->AddEntry(signal,"5 #times SM H(120) #rightarrow #tau #tau","F");
  }
>>>>>>> 1.9

  l->AddEntry(ZTT,"Z#rightarrow #tau #tau","F");
  l->AddEntry(EWK,"Electroweak","F");
  l->AddEntry(QCD,"QCD","F");
  l->AddEntry(ttbar,"t#bar{t}","F");
    
  hs->Add(ttbar);
  hs->Add(QCD);
  hs->Add(EWK);
  hs->Add(ZTT);

  if(s>0&(!log))
    hs->Add(signal);
    
  
  // if(sm) {
  //   TH1F * SM = (TH1F*)(f->Get(dir+"/SM120"));
  //   SM->Add((TH1F*)(f->Get(dir+"/VBF120")));
  //   applyStyle(SM,kGray+2,1,3005);
  //   hs->Add(SM);
  // }
  //  else {
  //  hs->Add(MSSM);



  hs->Draw("HIST");
  if(data->GetMaximum()*1.2+sqrt(data->GetMaximum())>hs->GetMaximum()) {
    float max=0.0;
    if(data->GetMaximum()>hs->GetMaximum())
      max=data->GetMaximum();
    else
      max=hs->GetMaximum();

    if(log) {
      max*=5000;
      hs->SetMinimum(0.5);
    }
    hs->SetMaximum(max*1.5+sqrt(data->GetMaximum()));

  }

  if(dndm)       hs->SetMinimum(0.001);


  hs->Draw("HIST");
  if(doRatio){
  	hs->GetXaxis()->SetLabelSize(0);
  }
  else
  {
	  if(units!="")
		hs->GetXaxis()->SetTitle(labelX+" ["+units+"]");
	  else
		hs->GetXaxis()->SetTitle(labelX);
  }

  hs->GetYaxis()->SetTitle("Events");
  if(dndm)
    hs->GetYaxis()->SetTitle("dN/d"+labelX);

  if(s>0&&log)
    signal->Draw("HIST,SAME");

  data->Draw("e,SAME");

  
  c->cd();
  
  if(doRatio){
    
    TH1F * data2 = (TH1F*)data->Clone("data");
    TH1F * data3 = (TH1F*)data->Clone("data");
    TH1F * mc = (TH1F*)(ttbar);
    mc->Add(QCD);
    mc->Add(EWK);
    mc->Add(ZTT);
    double xmin = mc->GetXaxis()->GetXmin();
    double xmax = mc->GetXaxis()->GetXmax();
    TLine *line = new TLine(xmin,0.0,xmax,0.0);
    line->SetLineWidth(3);
    line->SetLineColor(kBlack);
    
    
    ratioPad->Draw();
  	ratioPad->cd();
  	
  	Int_t nbins = data->GetNbinsX();
	Double_t x[1000], y[1000], errx[1000], erry[1000];
	
	TH1F * BKGErr = (TH1F*)(f->Get(dir+"/BKGErr"));	
	double Syst = BKGErr->GetBinContent(1);
	
	for(int i = 0; i < nbins; i++) {
    	double err=0;
    	if(data->GetBinContent(i+1)<0.0001){   
			err = 0.0;
		}
		else{
			err = (0.5*data->GetBinError(i+1)/sqrt(data->GetBinContent(i+1)));
			mc->SetBinError(i+1,mc->GetBinContent(i+1)*Syst);
		}
		data3->SetBinContent(i+1,sqrt(data->GetBinContent(i+1)));
    	data3->SetBinError(i+1,err);
  	}	

	data2->Add(mc,-1);
  	data2->Divide(data2,data3);
  	
	for(int i = 0; i < nbins; i++) {
    	if(data->GetBinContent(i+1)<0.0001){
			errx[i] = 0.5*data->GetXaxis()->GetBinWidth(i+1);    	
			x[i] = data->GetXaxis()->GetBinCenter(i+1);
			y[i] = 1.0;    
			erry[i] = 0.0;
			data2->SetBinError(i+1,0);
		}
		else{
			errx[i] = 0.5*data->GetXaxis()->GetBinWidth(i+1);    	
			x[i] = data->GetXaxis()->GetBinCenter(i+1);
			y[i] = 0.0;
			erry[i] = data2->GetBinError(i+1);
			data2->SetBinError(i+1,0);
		}
  	}


    data2->SetMarkerStyle(20);
    data2->SetTitleSize  (0.12,"Y");
    data2->SetTitleOffset(0.60,"Y");
    data2->SetTitleSize  (0.12,"X");
    data2->SetLabelSize  (0.10,"X");
    data2->SetLabelSize  (0.08,"Y");
    data2->GetYaxis()->SetTitleFont(42);
    data2->GetYaxis()->CenterTitle(kTRUE);
    data2->GetXaxis()->SetTitleFont(42);
    data2->GetYaxis()->SetRangeUser(-5.0,5.0);
    data2->GetYaxis()->SetNdivisions(305);
    data2->GetYaxis()->SetTitle("#frac{(N_{obs}-N_{exp})}{#sqrt{N_{obs}}}");
    data2->SetMarkerSize(1);
    gStyle->SetOptTitle(0);
    
    TGraphErrors *grErr = new TGraphErrors(nbins, x, y, errx, erry);
    grErr->SetFillColor(kPink-5);
    grErr->SetFillStyle(3001);
    grErr->SetMarkerSize(0);
    

    if(units!="")
	  data2->GetXaxis()->SetTitle(labelX+" ["+units+"]");
    else
	  data2->GetXaxis()->SetTitle(labelX);
	  
    data2->Draw("P");
    grErr->Draw("sameE2");
    data2->Draw("Psame");
    line->Draw();
    
    
    
  }
  
  c->cd();
  plotPad->cd();  

  l->SetBorderSize(0);
  l->SetFillColor(0);
  l->SetFillStyle (0);

  l->Draw();


  float factor=0.0;
  if(left) factor = 1./2.2;
  else factor = 1.05;


  float xL = hs->GetXaxis()->GetXmin()+(hs->GetXaxis()->GetXmax()-hs->GetXaxis()->GetXmin())*xR*factor;
  float yL = hs->GetMaximum()*0.35;

  if(log)
  yL = hs->GetMaximum()*0.35;

  float offsetF=yL-0.1*hs->GetMaximum();
  float offsetFF=yL-0.2*hs->GetMaximum();

  if(log) {

    offsetF=yL/2.;
    offsetFF=yL/5.;

  }


  TLatex latex;
  latex.SetNDC();
  if(doRatio)
  	latex.SetTextSize(0.05);
  else
  	latex.SetTextSize(0.04);
  	
  latex.SetTextAlign(11);
<<<<<<< makePlot.C
  latex.DrawLatex(0.20,0.94,"CMS  2011, L = 4.7 fb^{-1}, #sqrt{s} = 7 TeV      "+channel);
=======
  latex.SetTextFont(42);
  latex.DrawLatex(0.20,0.94,"CMS Preliminary 2011, 4.6 fb^{-1}, #sqrt{s} = 7 TeV      "+channel);
>>>>>>> 1.9

 if(log)
   plotPad->SetLogy();

 // c->RedrawAxis(); 
  c->SaveAs(name+".png");
  c->SaveAs(name+".pdf");
  c->SaveAs(name+".root");

}




makeEMuStack(TString name,TString file,TString dir,int s,TString labelX,TString units = "GeV",bool left=false,bool log = false)
{
  setStyle();

  float xR=0.45;
  if(left)
    xR=0.2;


  TCanvas * c = new TCanvas(name,name,600,600);
  c->SetLeftMargin     (0.18);
  c->SetRightMargin    (0.05);
  c->SetTopMargin      (0.08);
  c->SetBottomMargin   (0.15);


  c->cd();
  TFile *f = new TFile(file);

  TH1F * data = (TH1F*)(f->Get(dir+"/data_obs"));
  applyDATAStyle(data);

  TH1F * QCD = (TH1F*)(f->Get(dir+"/FAKES"));
  applyStyle(QCD,kBlue-8,1,1001);

  TH1F * ttbar = (TH1F*)(f->Get(dir+"/TT"));
  applyStyle(ttbar,kMagenta-10,1,1001);


  TH1F * EWK = (TH1F*)(f->Get(dir+"/VV"));
  applyStyle(EWK,kRed+2,1,1001);

  TH1F * ZTT = (TH1F*)(f->Get(dir+"/ZTT"));
  applyStyle(ZTT,kOrange-4,kBlack,1001);

  TH1F *signal=0;

  if(s==1) {
    TH1F * MSSM = (TH1F*)(f->Get(dir+"/GGH120"));
    MSSM->Scale(11.22);
    TH1F * MSSM2 = (TH1F*)(f->Get(dir+"/BBH120"));
    MSSM2->Scale(16.);
    MSSM->Add(MSSM2);
    MSSM->SetLineStyle(11);

    signal=MSSM;
    applySignalStyle(signal);

  }
  else if(s==2) {
    TH1F * MSSM = (TH1F*)(f->Get(dir+"/GGHNoJet120"));
    MSSM->Add((TH1F*)(f->Get(dir+"/GGHJet120")));
    MSSM->Scale(11.22);
    TH1F * MSSM2 = (TH1F*)(f->Get(dir+"/BBHNoJet120"));
    MSSM2->Add((TH1F*)(f->Get(dir+"/BBHJet120")));
    MSSM2->Add((TH1F*)(f->Get(dir+"/BBHBJet120")));
    MSSM2->Scale(16.);
    MSSM->Add(MSSM2);
    MSSM->SetLineStyle(11);
    signal=MSSM;
    applySignalStyle(signal);

  }
  else if(s==3) {
    TH1F * SM = (TH1F*)(f->Get(dir+"/SM120"));
    TH1F * SM2 = (TH1F*)(f->Get(dir+"/VBF120"));
    SM->Add(SM2);
    SM->SetLineStyle(11);

    signal=SM;
    signal->Scale(5.0);
    applySignalStyle(signal);
  }


  THStack *hs = new THStack("hs","");
  TLegend *l = new TLegend(xR,0.6,xR+0.5,0.9);

  l->AddEntry(data,"Observed","P");
  if(s>0&&s<3)
    l->AddEntry(signal,"#phi#rightarrow #tau #tau(m_{A}=120 GeV,tan#beta=20)","F");
  else if(s==3)
    l->AddEntry(signal,"5xSM H(120) #rightarrow #tau #tau","F");
  if(log){
	  if(s<3)
		l->AddEntry(signal,"#phi#rightarrow #tau #tau(m_{A}=120 GeV,tan#beta=20)","L");
	  else if(s==3)
		l->AddEntry(signal,"2xSM H(120) #rightarrow #tau #tau","L");
  }
  else{
	  if(s<3)
		l->AddEntry(signal,"#phi#rightarrow #tau #tau(m_{A}=120 GeV,tan#beta=20)","F");
	  else if(s==3)
		l->AddEntry(signal,"2xSM H(120) #rightarrow #tau #tau","F");
  }  


  l->AddEntry(ZTT,"Z#rightarrow #tau #tau","F");
  l->AddEntry(EWK,"Electroweak","F");
  l->AddEntry(QCD,"Fakes","F");
  l->AddEntry(ttbar,"t#bar{t}","F");
    
  hs->Add(ttbar);
  hs->Add(QCD);
  hs->Add(EWK);
  hs->Add(ZTT);


  if(s>0&(!log))
    hs->Add(signal);

  
  // if(sm) {
  //   TH1F * SM = (TH1F*)(f->Get(dir+"/SM120"));
  //   SM->Add((TH1F*)(f->Get(dir+"/VBF120")));
  //   applyStyle(SM,kGray+2,1,3005);
  //   hs->Add(SM);
  // }
  //  else {
  //  hs->Add(MSSM);



  hs->Draw("HIST");
  if(data->GetMaximum()*1.35+sqrt(data->GetMaximum())>hs->GetMaximum()) {
    float max=0.0;
    if(data->GetMaximum()>hs->GetMaximum())
      max=data->GetMaximum();
    else
      max=hs->GetMaximum();

    if(log) {
      max*=5000;
      hs->SetMinimum(0.5);


    }
    hs->SetMaximum(max*1.5+sqrt(data->GetMaximum()));

  }

  hs->Draw("HIST");
  hs->GetXaxis()->SetTitle(labelX+" ["+units+"]");
  hs->GetYaxis()->SetTitle(TString::Format("Events / %2.f ",hs->GetXaxis()->GetBinWidth(1))+units);

  if(s>0&&log)
    signal->Draw("HIST,SAME");


  data->Draw("e,SAME");


  l->SetBorderSize(0);
  l->SetFillColor(0);
  l->SetFillStyle (0);

  l->Draw();


  float factor=0.0;
  if(left) factor = 1./2.2;
  else factor = 1.05;


  float xL = hs->GetXaxis()->GetXmin()+(hs->GetXaxis()->GetXmax()-hs->GetXaxis()->GetXmin())*xR*factor;
  float yL = hs->GetMaximum()*0.35;

  if(log)
  yL = hs->GetMaximum()*0.35;

  float offsetF=yL-0.1*hs->GetMaximum();
  float offsetFF=yL-0.2*hs->GetMaximum();

  if(log) {

    offsetF=yL/2.;
    offsetFF=yL/5.;

  }


  TLatex latex;
  latex.SetNDC();
  latex.SetTextSize(0.04);
  latex.SetTextAlign(11);

  latex.DrawLatex(0.20,0.94,"CMS  2011, L = 4.7 fb^{-1}, #sqrt{s} = 7 TeV       e+$\mu");

 if(log)
   c->SetLogy();

 // c->RedrawAxis(); 
  c->SaveAs(name+".png");
  c->SaveAs(name+".pdf");
  c->SaveAs(name+".root");

}
