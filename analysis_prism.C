{
if(true){	
  gROOT->SetStyle("Plain");
  gStyle->SetTitleBorderSize(0);
  gStyle->SetOptStat("");

  gStyle->SetLabelFont(102,"");
  gStyle->SetLabelSize(0.06,"");
  gStyle->SetLabelFont(102,"xyz");
  gStyle->SetLabelSize(0.04,"xyz");
  gStyle->SetLabelOffset(0.001,"x");
  gStyle->SetLabelOffset(0.01,"y");

  gStyle->SetTitleFont(42,"xyz");
  gStyle->SetTitleFontSize(0.06);
  gStyle->SetTitleFont(42);
  gStyle->SetTitleSize(0.06,"xyz");
  gStyle->SetTitleOffset(0.9,"x");
  gStyle->SetTitleOffset(0.9,"y");

  gStyle->SetStripDecimals(kFALSE);

  gStyle->SetPadLeftMargin(0.15);
  gStyle->SetPadBottomMargin(0.15);

  gStyle->SetStatW(0.35);
  gStyle->SetStatH(0.25);

  gStyle->SetPadTickX(kTRUE);
  gStyle->SetPadTickY(kTRUE);

  gStyle->SetPalette(1);
  gStyle->SetNumberContours(99);

  gStyle->SetHistLineWidth(2);
  gStyle->SetFrameLineWidth(2);
  gStyle->SetFuncWidth(2);

  gStyle->SetStatFont(42);
  gStyle->SetOptFit(1111);
  gStyle->SetOptStat(0000);
}

TH2D* h2_trueE_trueY_nominal = new TH2D("h2_trueE_trueY_nominal","h2_trueE_trueY_nominal", 40, 0, 10, 40, 0, 1);
TH2D* h2_recoE_recoY_nominal = new TH2D("h2_recoE_recoY_nominal","h2_recoE_recoY_nominal", 40, 0, 10, 40, 0, 1);

TH2D* h2_trueE_trueY_var[20];
TH2D* h2_recoE_recoY_var[20];

TH1D* h1_var1_trueMINUSreco[40];
TH1D* h1_var2_trueMINUSreco[40];
TH1D* h1_var3_trueMINUSreco[40];
TH1D* h1_var4_trueMINUSreco[40];
TH1D* h1_var5_trueMINUSreco[40];
TH1D* h1_var6_trueMINUSreco[40];
TH1D* h1_var7_trueMINUSreco[40];
TH1D* h1_var8_trueMINUSreco[40];
TH1D* h1_nominal_trueMINUSreco[40];

TH1D* h1_var1_reco[100];
TH1D* h1_var2_reco[100];
TH1D* h1_var3_reco[100];
TH1D* h1_var4_reco[100];
TH1D* h1_var5_reco[100];
TH1D* h1_var6_reco[100];
TH1D* h1_var7_reco[100];
TH1D* h1_var8_reco[100];
TH1D* h1_var9_reco[100];
TH1D* h1_var10_reco[100];
TH1D* h1_var11_reco[100];
TH1D* h1_nominal_reco[100];

for(Int_t i=0;i<20;i++){
  h2_trueE_trueY_var[i] = new TH2D("","true", 40, 0, 10, 40, 0, 1);
  h2_recoE_recoY_var[i] = new TH2D("","reco", 40, 0, 10, 40, 0, 1);
}

for(Int_t i=0;i<40;i++){
  h1_nominal_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var1_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var2_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var3_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var4_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var5_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var6_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var7_trueMINUSreco[i] = new TH1D("","",100,-2,2);
  h1_var8_trueMINUSreco[i] = new TH1D("","",100,-2,2);
}
for(Int_t i=0;i<50;i++){
  h1_nominal_reco[i] = new TH1D("","",200,0,4);
  h1_var1_reco[i] = new TH1D("","",200,0,4);
  h1_var2_reco[i] = new TH1D("","",200,0,4);
  h1_var3_reco[i] = new TH1D("","",200,0,4);
  h1_var4_reco[i] = new TH1D("","",200,0,4);
  h1_var5_reco[i] = new TH1D("","",200,0,4);
  h1_var6_reco[i] = new TH1D("","",200,0,4);
  h1_var7_reco[i] = new TH1D("","",200,0,4);
  h1_var8_reco[i] = new TH1D("","",200,0,4);  
  h1_var9_reco[i] = new TH1D("","",200,0,4);
  h1_var10_reco[i] = new TH1D("","",200,0,4);
  h1_var11_reco[i] = new TH1D("","",200,0,4);

  h1_nominal_reco[i+50] = new TH1D("","",400,0,8);
  h1_var1_reco[i+50] = new TH1D("","",400,0,8);
  h1_var2_reco[i+50] = new TH1D("","",400,0,8);
  h1_var3_reco[i+50] = new TH1D("","",400,0,8);
  h1_var4_reco[i+50] = new TH1D("","",400,0,8);
  h1_var5_reco[i+50] = new TH1D("","",400,0,8);
  h1_var6_reco[i+50] = new TH1D("","",400,0,8);
  h1_var7_reco[i+50] = new TH1D("","",400,0,8);
  h1_var8_reco[i+50] = new TH1D("","",400,0,8);
  h1_var9_reco[i+50] = new TH1D("","",400,0,8);
  h1_var10_reco[i+50] = new TH1D("","",400,0,8);
  h1_var11_reco[i+50] = new TH1D("","",400,0,8);  
}

TH1D* h1_result_nominal = new TH1D("","",40,0,10);

TH1D* h1_nom_true = new TH1D("","",40,0,10);

TH1D* h1_ratio_var[10];
TH1D* h1_result_var[10];
TH1D* h1_var_true[10];
TH1D* h1_residual_true[10];
for(Int_t i=0;i<10;i++){
  h1_result_var[i] = new TH1D("","",40,0,10);
  h1_ratio_var[i] = new TH1D("","",40,0,10);
  h1_var_true[i] = new TH1D("","",40,0,10);
  h1_residual_true[i] = new TH1D("","",40,0,10);
}

TFile genie_Ar("genie/FD_FHC_nueswap.root");
TFile genie_CH("genie/CAF_CH.root");
TFile nuwro_Ar("nuwro/my_Ar_tracker.root");
TFile nuwro_CH("nuwro/my_CH_tracker.root");

TTree* genieAr = (TTree*)genie_Ar.Get("caf");
TTree* potT    = (TTree*)genie_Ar.Get("meta");
TTree* genieCH = (TTree*)genie_CH.Get("caf");
TTree* nuwroAr = (TTree*)nuwro_Ar.Get("nRooTracker");
TTree* nuwroCH = (TTree*)nuwro_CH.Get("nRooTracker");

Double_t wgt_MaCCQE[10], wgt_VecFFCCQEshape[10], wgt_MaCCRES[10], wgt_MvCCRES[10], wgt_AhtBY[10], wgt_BhtBY[10], wgt_CV1uBY[10], 
	 wgt_CV2uBY[10], wgt_FrElas_pi[10], wgt_FtInel_pi[10], wgt_FrAbs_pi[10], wgt_FormZone[10], wgt_FrPiProd_pi[10], 
	 wgt_MFP_N[10], wgt_FrCEx_N[10], wgt_CCQEEPauliSupViaKF[10], wgt_Mnv2p2hGaussEnhancement[10], wgt_MKSPP_ReWeight[10],
	 wgt_E2p2h_A_nu[10], wgt_E2p2h_B_nu[10], wgt_E2p2h_A_nubar[10], wgt_E2p2h_B_nubar[10], wgt_BePRA_A[10], wgt_BePRA_B[10], 
	 wgt_BePRA_D[10], wgt_BePRA_E[10], wgt_C12ToAr40_2p2hScaling_nu[10], wgt_C12ToAr40_2p2hScaling_nubar[10], 
	 wgt_nuenuebar_xsec_ratio[10],  wgt_nuenumu_xsec_ratio[10], wgt_SPPLowQ2Suppression[10], wgt_FSILikeEAvailSmearing[10];

Double_t Ev;
Double_t YY;
Double_t Ev_reco;
Double_t Elep_reco, eP, ePi0, eN; 
Int_t isFD, isCC, nuPDG, LepPDG;
Double_t LepE, eDepP, eDepN, eDepPip, eDepPim, eDepPi0, eDepOther;

genieAr->SetBranchAddress("Ev",&Ev);
genieAr->SetBranchAddress("Y",&YY);
genieAr->SetBranchAddress("Ev_reco",&Ev_reco);
genieAr->SetBranchAddress("Elep_reco",&Elep_reco);
genieAr->SetBranchAddress("eP",&eP);
genieAr->SetBranchAddress("eN",&eN);
genieAr->SetBranchAddress("ePi0",&ePi0);
genieAr->SetBranchAddress("isFD",&isFD);
genieAr->SetBranchAddress("isCC",&isCC);
genieAr->SetBranchAddress("nuPDG",&nuPDG);
genieAr->SetBranchAddress("LepPDG",&LepPDG);
genieAr->SetBranchAddress("LepE",&LepE);
genieAr->SetBranchAddress("eDepN",&eDepN);
genieAr->SetBranchAddress("eDepP",&eDepP);
genieAr->SetBranchAddress("eDepPip",&eDepPip);
genieAr->SetBranchAddress("eDepPim",&eDepPim);
genieAr->SetBranchAddress("eDepPi0",&eDepPi0);
genieAr->SetBranchAddress("eDepOther",&eDepOther);

genieAr->SetBranchAddress("wgt_MaCCRES",&wgt_MaCCRES);
genieAr->SetBranchAddress("wgt_MvCCRES",&wgt_MvCCRES);
genieAr->SetBranchAddress("wgt_AhtBY",&wgt_AhtBY);
genieAr->SetBranchAddress("wgt_BhtBY",&wgt_BhtBY);
genieAr->SetBranchAddress("wgt_CV1uBY",&wgt_CV1uBY);
genieAr->SetBranchAddress("wgt_CV2uBY",&wgt_CV2uBY);
genieAr->SetBranchAddress("wgt_C12ToAr40_2p2hScaling_nu",&wgt_C12ToAr40_2p2hScaling_nu);
genieAr->SetBranchAddress("wgt_nuenuebar_xsec_ratio",&wgt_nuenuebar_xsec_ratio);
genieAr->SetBranchAddress("wgt_SPPLowQ2Suppression",&wgt_SPPLowQ2Suppression);
genieAr->SetBranchAddress("wgt_FSILikeEAvailSmearing",&wgt_FSILikeEAvailSmearing);

genieAr->SetBranchAddress("wgt_E2p2h_A_nu",&wgt_E2p2h_A_nu);
genieAr->SetBranchAddress("wgt_E2p2h_B_nu",&wgt_E2p2h_B_nu);
genieAr->SetBranchAddress("wgt_E2p2h_A_nubar",&wgt_E2p2h_A_nubar);
genieAr->SetBranchAddress("wgt_E2p2h_B_nubar",&wgt_E2p2h_B_nubar);
genieAr->SetBranchAddress("wgt_Mnv2p2hGaussEnhancement",&wgt_Mnv2p2hGaussEnhancement);

bool selected = false;

for(Int_t i=0;i<genieAr->GetEntries(); i++){
  genieAr->GetEntry(i);
  //cout<<Ev<<" "<<YY<<" "<<Ev_reco<<" "<<Elep_reco<<endl;
  if(isFD && isCC && nuPDG == 12 ) selected = true;
  else selected = false;

  if (selected){
    if(isFD) Ev_reco = LepE + eDepP + eDepN + eDepPip + eDepPim + eDepPi0 + eDepOther;

    h2_trueE_trueY_nominal->Fill(Ev, YY);
    h2_recoE_recoY_nominal->Fill(Ev_reco, (Ev_reco-Elep_reco)/Ev_reco);

    h2_trueE_trueY_var[0]->Fill(Ev, YY, wgt_MvCCRES[0]);
    h2_recoE_recoY_var[0]->Fill(Ev_reco, (Ev_reco-Elep_reco)/Ev_reco, wgt_MvCCRES[0]);

    h2_trueE_trueY_var[1]->Fill(Ev, YY, wgt_AhtBY[0]);
    h2_recoE_recoY_var[1]->Fill(Ev_reco, (Ev_reco-Elep_reco)/Ev_reco, wgt_AhtBY[0]);

    h2_trueE_trueY_var[2]->Fill(Ev, YY, wgt_BhtBY[2]);
    h2_recoE_recoY_var[2]->Fill(Ev_reco, (Ev_reco-Elep_reco)/Ev_reco, wgt_BhtBY[2]);

    h2_trueE_trueY_var[3]->Fill(Ev, YY, wgt_C12ToAr40_2p2hScaling_nu[2]);
    h2_recoE_recoY_var[3]->Fill(Ev_reco, (Ev_reco-Elep_reco)/Ev_reco, wgt_C12ToAr40_2p2hScaling_nu[2]);  

    h2_trueE_trueY_var[4]->Fill(Ev, YY, wgt_SPPLowQ2Suppression[2]);
    h2_recoE_recoY_var[4]->Fill(Ev_reco, (Ev_reco-Elep_reco)/Ev_reco, wgt_SPPLowQ2Suppression[2]);

    h2_trueE_trueY_var[5]->Fill(Ev, YY, wgt_FSILikeEAvailSmearing[2]);
    h2_recoE_recoY_var[5]->Fill(Ev_reco, (Ev_reco-Elep_reco)/Ev_reco, wgt_FSILikeEAvailSmearing[2]);

    h1_nom_true->Fill(Ev);

    h1_var_true[0] -> Fill(Ev, wgt_FSILikeEAvailSmearing[2]);
    h1_var_true[1] -> Fill(Ev, wgt_E2p2h_A_nu[2]);
    h1_var_true[2] -> Fill(Ev, wgt_E2p2h_B_nu[2]);
    h1_var_true[3] -> Fill(Ev, wgt_E2p2h_A_nubar[2]);
    h1_var_true[4] -> Fill(Ev, wgt_E2p2h_B_nubar[2]);
    h1_var_true[5] -> Fill(Ev, wgt_Mnv2p2hGaussEnhancement[2]);
    h1_var_true[6] -> Fill(Ev, wgt_MvCCRES[2]);
    h1_var_true[7] -> Fill(Ev-0.2*eDepP); 	    

    int binN = Ev/0.25;
    if (Ev>=10) { binN = 39; }
    h1_nominal_trueMINUSreco[binN]->Fill(Ev-Ev_reco);
    h1_var1_trueMINUSreco[binN]->Fill(Ev-Ev_reco, wgt_FSILikeEAvailSmearing[2]);
    h1_var2_trueMINUSreco[binN]->Fill(Ev-Ev_reco, wgt_E2p2h_A_nu[2]);
    h1_var3_trueMINUSreco[binN]->Fill(Ev-Ev_reco, wgt_E2p2h_B_nu[2]);
    h1_var4_trueMINUSreco[binN]->Fill(Ev-Ev_reco, wgt_E2p2h_A_nubar[2]);
    h1_var5_trueMINUSreco[binN]->Fill(Ev-Ev_reco, wgt_E2p2h_B_nubar[2]);
    h1_var6_trueMINUSreco[binN]->Fill(Ev-Ev_reco, wgt_Mnv2p2hGaussEnhancement[2]);
    h1_var7_trueMINUSreco[binN]->Fill(Ev-Ev_reco, wgt_MvCCRES[2]);
    h1_var8_trueMINUSreco[binN]->Fill(Ev-(Ev_reco-0.2*eDepP));

    int binNN = Ev/0.05;
    if(Ev>=5) binNN = 99;
    h1_nominal_reco[binNN]->Fill(Ev_reco);
    h1_var1_reco[binNN]->Fill(Ev_reco, wgt_FSILikeEAvailSmearing[2]);
    h1_var2_reco[binNN]->Fill(Ev_reco, wgt_E2p2h_A_nu[2]);
    h1_var3_reco[binNN]->Fill(Ev_reco, wgt_E2p2h_B_nu[2]);
    h1_var4_reco[binNN]->Fill(Ev_reco, wgt_E2p2h_A_nubar[2]);
    h1_var5_reco[binNN]->Fill(Ev_reco, wgt_E2p2h_B_nubar[2]);
    h1_var6_reco[binNN]->Fill(Ev_reco, wgt_Mnv2p2hGaussEnhancement[2]);
    h1_var7_reco[binNN]->Fill(Ev_reco, wgt_MvCCRES[2]);
    h1_var8_reco[binNN]->Fill(Ev_reco-0.2*eP);
    h1_var9_reco[binNN]->Fill(Ev_reco-0.2*eN);
    h1_var10_reco[binNN]->Fill(Ev_reco-0.02*(eDepP+eDepPip+eDepPim));
    h1_var11_reco[binNN]->Fill(Ev_reco-0.1*(ePi0-eDepPi0));
  }
}

for(Int_t i=0;i< 40; i++){
  h1_result_nominal ->SetBinContent ( i+1, h1_nominal_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[0] ->SetBinContent ( i+1, h1_var1_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[1] ->SetBinContent ( i+1, h1_var2_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[2] ->SetBinContent ( i+1, h1_var3_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[3] ->SetBinContent ( i+1, h1_var4_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[4] ->SetBinContent ( i+1, h1_var5_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[5] ->SetBinContent ( i+1, h1_var6_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[6] ->SetBinContent ( i+1, h1_var7_trueMINUSreco[i]->GetMean()) ;
  h1_result_var[7] ->SetBinContent ( i+1, h1_var8_trueMINUSreco[i]->GetMean()) ;
}

for(Int_t i=0;i<40;i++){
  for(Int_t j=0;j<8;j++){
    h1_ratio_var[j]->SetBinContent(i+1, h1_result_var[j]->GetBinContent(i+1)/ h1_result_nominal->GetBinContent(i+1));
    h1_residual_true[j]->SetBinContent(i+1, (h1_var_true[j]->GetBinContent(i+1)-h1_nom_true->GetBinContent(i+1))/h1_nom_true->GetBinContent(i+1));
  }
}

TFile* ff = TFile::Open("shift_save.root","RECREATE");
TLegend* legend;
TLegend* legend0[100];
TCanvas* c0[100];
//TCanvas* c0 = new TCanvas();
//c0->Divide(5,5);
for(Int_t i=0;i<50;i++){
  c0[i] = new TCanvas();
  c0[i] -> SetCanvasSize(1200,900);
  //c0->cd(i+1);
  h1_nominal_reco[i+2]->SetLineColor(1);
  h1_nominal_reco[i+2]->Draw("hist l");
  h1_nominal_reco[i+2]->SetTitle(Form("true bin %d-%d MeV",(i+2)*50,(i+3)*50));
  h1_nominal_reco[i+2]->GetXaxis()->SetTitle("E_{reco}");
  h1_nominal_reco[i+2]->GetYaxis()->SetTitle("Events");
  h1_var1_reco[i+2]->SetLineColor(2);
  h1_var2_reco[i+2]->SetLineColor(3);
  h1_var3_reco[i+2]->SetLineColor(4);
  h1_var4_reco[i+2]->SetLineColor(5);
  h1_var5_reco[i+2]->SetLineColor(6);
  h1_var6_reco[i+2]->SetLineColor(7);
  h1_var7_reco[i+2]->SetLineColor(8);
  h1_var8_reco[i+2]->SetLineColor(9);  
  h1_var9_reco[i+2]->SetLineColor(7);
  h1_var10_reco[i+2]->SetLineColor(8);
  h1_var11_reco[i+2]->SetLineColor(9);

  h1_var8_reco[i+2]->SetLineStyle(2);
  h1_var9_reco[i+2]->SetLineStyle(2);
  h1_var10_reco[i+2]->SetLineStyle(2);
  h1_var11_reco[i+2]->SetLineStyle(2);

  h1_nominal_reco[i+2]->GetXaxis()->SetRangeUser(0, (i+2)*0.1 * 1.5);  

  h1_var1_reco[i+2]->Draw("same hist l");
  h1_var2_reco[i+2]->Draw("same hist l");
  h1_var3_reco[i+2]->Draw("same hist l");
  h1_var4_reco[i+2]->Draw("same hist l");
  h1_var5_reco[i+2]->Draw("same hist l");
  h1_var6_reco[i+2]->Draw("same hist l");
  h1_var7_reco[i+2]->Draw("same hist l");
  h1_var8_reco[i+2]->Draw("same hist l");
  h1_var9_reco[i+2]->Draw("same hist l");
  h1_var10_reco[i+2]->Draw("same hist l");
  h1_var11_reco[i+2]->Draw("same hist l");

  legend0[i] = new TLegend(0.5, 0.2, 0.9, 0.6);
  legend0[i]->SetHeader(Form("true bin %d-%d MeV",(i+2)*50,(i+3)*50));
  legend0[i]->AddEntry(h1_nominal_reco[i+2],"Nominal","l");
  legend0[i]->AddEntry(h1_var1_reco[i+2],"FSILikeEAvailSmearing shift","l");
  legend0[i]->AddEntry(h1_var2_reco[i+2],"E2p2h_A_nu shift","l");
  legend0[i]->AddEntry(h1_var3_reco[i+2],"E2p2h_B_nu shift","l");
  legend0[i]->AddEntry(h1_var4_reco[i+2],"E2p2h_A_nubar shift","l");
  legend0[i]->AddEntry(h1_var5_reco[i+2],"E2p2h_B_nubar shift","l");
  legend0[i]->AddEntry(h1_var6_reco[i+2],"wgt_Mnv2p2hGaussEnhancement shift","l");
  legend0[i]->AddEntry(h1_var7_reco[i+2],"wgt_MvCCRES shift","l");
  legend0[i]->AddEntry(h1_var8_reco[i+2],"20\% proton energy shift","l");  
  legend0[i]->AddEntry(h1_var9_reco[i+2],"20\% neutron energy shift","l");
  legend0[i]->AddEntry(h1_var10_reco[i+2],"ChargedHadResFD","l");
  legend0[i]->AddEntry(h1_var11_reco[i+2],"EMResFD","l");
  legend0[i]->Draw();

  h1_nominal_reco[i+2]->Write(Form("Nominal_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var1_reco[i+2]->Write(Form("FSILikeEAvailSmearing_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var2_reco[i+2]->Write(Form("E2p2h_A_nu_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var3_reco[i+2]->Write(Form("E2p2h_B_nu_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var4_reco[i+2]->Write(Form("E2p2h_A_nubar_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var5_reco[i+2]->Write(Form("E2p2h_B_nubar_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var6_reco[i+2]->Write(Form("Mnv2p2hGaussEnhancement_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var7_reco[i+2]->Write(Form("MvCCRES_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var8_reco[i+2]->Write(Form("20Pproton_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var9_reco[i+2]->Write(Form("20Pneutron_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var10_reco[i+2]->Write(Form("ChargedHadResFD_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  h1_var11_reco[i+2]->Write(Form("EMResFD_Etrue_%d-%d",(i+2)*50,(i+3)*50));
  c0[i]->SaveAs(Form("trueBin%d-%dMeV.png",(i+2)*50,(i+3)*50));
}

new TCanvas();
h1_residual_true[0]->Draw();
h1_residual_true[0]->GetXaxis()->SetTitle("Ev");
h1_residual_true[0]->GetYaxis()->SetTitle("(var.-nom.)/nom.");
h1_residual_true[0]->GetYaxis()->SetRangeUser(-0.15, 0.15);
for(Int_t i=0;i<8;i++){
  h1_residual_true[i]->Draw("same");
  h1_residual_true[i]->SetLineColor(i);
  if(i==5 || i==0 ) h1_residual_true[i]->SetLineColor(i+8);
  h1_residual_true[i]->SetLineWidth(2);
}
legend = new TLegend(0.5, 0.2, 0.9, 0.6);
legend->SetHeader("Variations");
legend->AddEntry(h1_residual_true[0],"FSILikeEAvailSmearing shift","l");
legend->AddEntry(h1_residual_true[1],"E2p2h_A_nu shift","l");
legend->AddEntry(h1_residual_true[2],"E2p2h_B_nu shift","l");
legend->AddEntry(h1_residual_true[3],"E2p2h_A_nubar shift","l");
legend->AddEntry(h1_residual_true[4],"E2p2h_B_nubar shift","l");
legend->AddEntry(h1_residual_true[5],"wgt_Mnv2p2hGaussEnhancement shift","l");
legend->AddEntry(h1_residual_true[6],"wgt_MvCCRES shift","l");
legend->AddEntry(h1_residual_true[7],"20\% proton energy shift","l");
legend->Draw();


new TCanvas();
h1_result_nominal->Draw();
h1_result_nominal->GetXaxis()->SetTitle("Ev");
h1_result_nominal->GetYaxis()->SetTitle("E_{true} - E_{reco}");
for(Int_t i=0;i<8;i++){
  h1_result_var[i]->Draw("same");
  h1_result_var[i]->SetLineColor(i);
  if(i==5 || i==0) h1_result_var[i]->SetLineColor(8+i);
  h1_result_var[i]->SetLineWidth(2);
}
legend = new TLegend(0.5, 0.2, 0.9, 0.6);
legend->SetHeader("Variations");
legend->AddEntry(h1_result_nominal,"nominal","l");
legend->AddEntry(h1_result_var[0],"FSILikeEAvailSmearing shift","l");
legend->AddEntry(h1_result_var[1],"E2p2h_A_nu shift","l");
legend->AddEntry(h1_result_var[2],"E2p2h_B_nu shift","l");
legend->AddEntry(h1_result_var[3],"E2p2h_A_nubar shift","l");
legend->AddEntry(h1_result_var[4],"E2p2h_B_nubar shift","l");
legend->AddEntry(h1_result_var[5],"wgt_Mnv2p2hGaussEnhancement shift","l");
legend->AddEntry(h1_result_var[6],"wgt_MvCCRES shift","l");
legend->AddEntry(h1_result_var[7],"20\% proton energy shift","l");
legend->Draw();

new TCanvas();
h1_ratio_var[0]->Draw();
h1_ratio_var[0]->GetXaxis()->SetTitle("Ev");
h1_ratio_var[0]->GetYaxis()->SetTitle("E_{var} / E_{nominal}");
h1_ratio_var[0]->GetYaxis()->SetRangeUser(0.9, 1.2);
for(Int_t i=1;i<8;i++){
  h1_ratio_var[i]->Draw("same");
  h1_ratio_var[i]->SetLineColor(i);
  if(i==5 || i==0) h1_ratio_var[i]->SetLineColor(8+i);
  h1_ratio_var[i]->SetLineWidth(2);
}
legend = new TLegend(0.5, 0.2, 0.9, 0.6);
legend->SetHeader("Variations");
legend->AddEntry(h1_ratio_var[0],"FSILikeEAvailSmearing shift","l");
legend->AddEntry(h1_ratio_var[1],"E2p2h_A_nu shift","l");
legend->AddEntry(h1_ratio_var[2],"E2p2h_B_nu shift","l");
legend->AddEntry(h1_ratio_var[3],"E2p2h_A_nubar shift","l");
legend->AddEntry(h1_ratio_var[4],"E2p2h_B_nubar shift","l");
legend->AddEntry(h1_ratio_var[5],"wgt_Mnv2p2hGaussEnhancement shift","l");
legend->AddEntry(h1_ratio_var[6],"wgt_MvCCRES shift","l");
legend->AddEntry(h1_ratio_var[7],"20\% proton energy shift","l");
legend->Draw();

TCanvas* c1 = new TCanvas();
c1->Divide(3,4);
c1->cd(1);
h2_trueE_trueY_nominal->Draw("colz");
c1->cd(2);
h2_recoE_recoY_nominal->Draw("colz");
for(Int_t i=0;i<6;i++){
  c1->cd(2*i+3);
  h2_trueE_trueY_var[i]->Draw("colz");
  c1->cd(2*i+4);
  h2_recoE_recoY_var[i]->Draw("colz");
}




/*
genieCH->SetBranchAddress("wgt_MaCCRES",&wgt_MaCCRES);
genieCH->SetBranchAddress("wgt_MvCCRES",&wgt_MvCCRES);
genieCH->SetBranchAddress("wgt_AhtBY",&wgt_AhtBY);
genieCH->SetBranchAddress("wgt_BhtBY",&wgt_BhtBY);
genieCH->SetBranchAddress("wgt_CV1uBY",&wgt_CV1uBY);
genieCH->SetBranchAddress("wgt_CV2uBY",&wgt_CV2uBY);
genieCH->SetBranchAddress("wgt_C12ToAr40_2p2hScaling_nu",&wgt_C12ToAr40_2p2hScaling_nu);
genieCH->SetBranchAddress("wgt_nuenuebar_xsec_ratio",&wgt_nuenuebar_xsec_ratio);
genieCH->SetBranchAddress("wgt_SPPLowQ2Suppression",&wgt_SPPLowQ2Suppression);
genieCH->SetBranchAddress("wgt_FSILikeEAvailSmearing",&wgt_FSILikeEAvailSmearing);
*/



}
