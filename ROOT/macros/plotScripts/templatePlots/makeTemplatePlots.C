{
   gROOT->ProcessLine(".L UWAnalysis/ROOT/macros/plotScripts/templatePlots/makePlot.C");


   makeLTauStack("muTau/pt1","muTauPlots/muTau_pt1.root","muTau_X",3,"#mu p_{T}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/pt1LOG","muTauPlots/muTau_pt1.root","muTau_X",3,"#mu p_{T}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/pt2","muTauPlots/muTau_pt2.root","muTau_X",3,"#tau p_{T}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/pt2LOG","muTauPlots/muTau_pt2.root","muTau_X",3,"#tau p_{T}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/eta1","muTauPlots/muTau_eta1.root","muTau_X",3,"#mu #eta","",true,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/eta1LOG","muTauPlots/muTau_eta1.root","muTau_X",3,"#mu #eta","",true,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/eta2","muTauPlots/muTau_eta2.root","muTau_X",3,"#tau #eta","",true,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/eta2LOG","muTauPlots/muTau_eta2.root","muTau_X",3,"#tau #eta","",true,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/mvis","muTauPlots/muTau_MVis.root","muTau_X",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/mvisLOG","muTauPlots/muTau_MVis.root","muTau_X",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/sv","muTauPlots/muTau_SVFit.root","muTau_X",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/svLOG","muTauPlots/muTau_SVFit.root","muTau_X",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/mvis_NOB","muTauPlots/muTau_MVis.root","muTau_NoB",2,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/mvis_NOBLOG","muTauPlots/muTau_MVis.root","muTau_NoB",2,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/sv_NOB","muTauPlots/muTau.root","muTau_NoB",2,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",false,true);
   makeLTauStack("muTau/sv_NOBLOG","muTauPlots/muTau.root","muTau_NoB",2,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",true,true);

   makeLTauStack("muTau/mvis_B","muTauPlots/muTau_MVisLS.root","muTau_B",1,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/mvis_BLOG","muTauPlots/muTau_MVisLS.root","muTau_B",1,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/sv_B","muTauPlots/muTau.root","muTau_B",1,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",false,true);
   makeLTauStack("muTau/sv_BLOG","muTauPlots/muTau.root","muTau_B",1,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",true,true);

   makeLTauStack("muTau/mvis_SM0","muTauPlots/muTau_SM_MVis.root","muTau_SM0",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/mvis_SM0LOG","muTauPlots/muTau_SM_MVis.root","muTau_SM0",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/sv_SM0","muTauPlots/muTauSM.root","muTau_SM0",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",false,true);
   makeLTauStack("muTau/sv_SM0LOG","muTauPlots/muTauSM.root","muTau_SM0",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",true,true);

   makeLTauStack("muTau/mvis_SM1","muTauPlots/muTau_SM_MVis.root","muTau_SM1",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",false,true);
   makeLTauStack("muTau/mvis_SM1LOG","muTauPlots/muTau_SM_MVis.root","muTau_SM1",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",true,true);

   makeLTauStack("muTau/sv_SM1","muTauPlots/muTauSM.root","muTau_SM1",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",false,true);
   makeLTauStack("muTau/sv_SM1LOG","muTauPlots/muTauSM.root","muTau_SM1",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",true,true);

   makeLTauStack("muTau/mvis_SM2","muTauPlots/muTau_SM_MVis.root","muTau_SM2",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/mvis_SM2LOG","muTauPlots/muTau_SM_MVis.root","muTau_SM2",3,"m_{vis}","GeV",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/sv_SM2","muTauPlots/muTauSM.root","muTau_SM2",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",false,true);
   makeLTauStack("muTau/sv_SM2LOG","muTauPlots/muTauSM.root","muTau_SM2",3,"m_{#tau#tau}","GeV",false,"#tau_{#mu}#tau_{h}",true,true);

   makeLTauStack("muTau/jets","muTauPlots/muTau_jets.root","muTau_X",3,"Number of Jets","",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/jetsLOG","muTauPlots/muTau_jets.root","muTau_X",3,"Number of  Jets","",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/bjets","muTauPlots/muTau_bjets.root","muTau_X",3,"Number of  b-Tagged Jets","",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/bjetsLOG","muTauPlots/muTau_bjets.root","muTau_X",3,"Number of b-Tagged Jets","",false,"#tau_{#mu}#tau_{h}",true);

   makeLTauStack("muTau/deta","muTauPlots/muTau_DEta.root","muTau_SM2",3,"#Delta #eta(jj)","",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/Mjj","muTauPlots/muTau_MJJ.root","muTau_SM2",3,"M(jj)","GeV",false,"#tau_{#mu}#tau_{h}",false);
   
   makeLTauStack("muTau/vbfEta1","muTauPlots/muTau_vbfEta1.root","muTau_SM2",3,"Leading Jet #eta","",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/vbfEta2","muTauPlots/muTau_vbfEta2.root","muTau_SM2",3,"Sub-Leading Jet #eta","",false,"#tau_{#mu}#tau_{h}",false);
   
   makeLTauStack("muTau/vbfPt1","muTauPlots/muTau_vbfPt1.root","muTau_SM2",3,"Leading Jet p_{T}","",false,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/vbfPt2","muTauPlots/muTau_vbfPt2.root","muTau_SM2",3,"Sub-Leading Jet p_{T}","",false,"#tau_{#mu}#tau_{h}",false);

   makeLTauStack("muTau/PZ","muTauPlots/muTau_PZ.root","muTau_X",3,"p_{#zeta} - 1.5 #times p_{#zeta}^{vis}","GeV",true,"#tau_{#mu}#tau_{h}",false);
   makeLTauStack("muTau/MT","muTauPlots/muTau_MT.root","muTau_X",3,"M_{T}(#mu,MET)","GeV",false,"#tau_{#mu}#tau_{h}",false);

   makeLTauStack("muTau/BoostPt","muTauPlots/muTau_BoostedPt.root","muTau_X",3,"highest Jet P_{T}","GeV",false,"#tau_{#mu}#tau_{h}",true);
   makeLTauStack("muTau/BoostEta","muTauPlots/muTau_BoostedEta.root","muTau_X",3,"highest Jet #eta","GeV",false,"#tau_{#mu}#tau_{h}",true);




   makeLTauStack("eleTau/pt1","eleTauPlots/eleTau_pt1.root","eleTau_X",3,"e p_{T}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/pt1LOG","eleTauPlots/eleTau_pt1.root","eleTau_X",3,"e p_{T}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/eta1","eleTauPlots/eleTau_eta1.root","eleTau_X",3,"e #eta","",true,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/eta1LOG","eleTauPlots/eleTau_eta1.root","eleTau_X",3,"e #eta","",true,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/pt2","eleTauPlots/eleTau_pt2.root","eleTau_X",3,"#tau p_{T}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/pt2LOG","eleTauPlots/eleTau_pt2.root","eleTau_X",3,"#tau p_{T}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/eta2","eleTauPlots/eleTau_eta2.root","eleTau_X",3,"#tau #eta","",true,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/eta2LOG","eleTauPlots/eleTau_eta2.root","eleTau_X",3,"#tau #eta","",true,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/mvis","eleTauPlots/eleTau_MVis.root","eleTau_X",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/mvisLOG","eleTauPlots/eleTau_MVis.root","eleTau_X",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/sv","eleTauPlots/eleTau_SVFit.root","eleTau_X",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/svLOG","eleTauPlots/eleTau_SVFit.root","eleTau_X",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/mvis_NOB","eleTauPlots/eleTau_MVis.root","eleTau_NoB",2,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/mvis_NOBLOG","eleTauPlots/eleTau_MVis.root","eleTau_NoB",2,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/sv_NOB","eleTauPlots/eleTau.root","eleTau_NoB",2,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",false,true);
   makeLTauStack("eleTau/sv_NOBLOG","eleTauPlots/eleTau.root","eleTau_NoB",2,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",true,true);

   makeLTauStack("eleTau/mvis_B","eleTauPlots/eleTau_MVisLS.root","eleTau_B",1,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/mvis_BLOG","eleTauPlots/eleTau_MVisLS.root","eleTau_B",1,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/sv_B","eleTauPlots/eleTau_SVFitLS.root","eleTau_B",1,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/sv_BLOG","eleTauPlots/eleTau_SVFitLS.root","eleTau_B",1,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/mvis_SM0","eleTauPlots/eleTau_SM_MVis.root","eleTau_SM0",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/mvis_SM0LOG","eleTauPlots/eleTau_SM_MVis.root","eleTau_SM0",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/sv_SM0","eleTauPlots/eleTauSM.root","eleTau_SM0",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",false,true);
   makeLTauStack("eleTau/sv_SM0LOG","eleTauPlots/eleTauSM.root","eleTau_SM0",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",true,true);

   makeLTauStack("eleTau/mvis_SM1","eleTauPlots/eleTau_SM_MVis.root","eleTau_SM1",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/mvis_SM1LOG","eleTauPlots/eleTau_SM_MVis.root","eleTau_SM1",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/sv_SM1","eleTauPlots/eleTauSM.root","eleTau_SM1",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",false,true);
   makeLTauStack("eleTau/sv_SM1LOG","eleTauPlots/eleTauSM.root","eleTau_SM1",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",true,true);

   makeLTauStack("eleTau/mvis_SM2","eleTauPlots/eleTau_SM_MVis.root","eleTau_SM2",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/mvis_SM2LOG","eleTauPlots/eleTau_SM_MVis.root","eleTau_SM2",3,"m_{vis}","GeV",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/sv_SM2","eleTauPlots/eleTauSM.root","eleTau_SM2",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",false,true);
   makeLTauStack("eleTau/sv_SM2LOG","eleTauPlots/eleTauSM.root","eleTau_SM2",3,"m_{#tau#tau}","GeV",false,"#tau_{e}#tau_{h}",true,true);

   makeLTauStack("eleTau/PZ","eleTauPlots/eleTau_PZ.root","eleTau_X",3,"p_{#zeta} - 1.5 x p_{#zeta}^{vis}","GeV",true,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/MT","eleTauPlots/eleTau_MT.root","eleTau_X",3,"M_{T}(e,MET)","GeV",false,"#tau_{e}#tau_{h}",false);

   makeLTauStack("eleTau/deta","eleTauPlots/eleTau_DEta.root","eleTau_SM2",3,"#Delta #eta(jj)","",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/Mjj","eleTauPlots/eleTau_MJJ.root","eleTau_SM2",3,"M(jj)","GeV",false,"#tau_{e}#tau_{h}",false);

   makeLTauStack("eleTau/jets","eleTauPlots/eleTau_jets.root","eleTau_X",3,"Number of Jets","",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/jetsLOG","eleTauPlots/eleTau_jets.root","eleTau_X",3,"Number of Jets","",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/vbfEta1","eleTauPlots/eleTau_vbfEta1.root","eleTau_SM2",3,"Leading Jet #eta","",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/vbfEta2","eleTauPlots/eleTau_vbfEta2.root","eleTau_SM2",3,"Sub-Leading Jet #eta","",false,"#tau_{e}#tau_{h}",false);
   
   makeLTauStack("eleTau/vbfPt1","eleTauPlots/eleTau_vbfPt1.root","eleTau_SM2",3,"Leading Jet p_{T}","",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/vbfPt2","eleTauPlots/eleTau_vbfPt2.root","eleTau_SM2",3,"Sub-Leading Jet p_{T}","",false,"#tau_{e}#tau_{h}",false);

   makeLTauStack("eleTau/bjets","eleTauPlots/eleTau_bjets.root","eleTau_X",3,"Number of b-Tagged Jets","",false,"#tau_{e}#tau_{h}",false);
   makeLTauStack("eleTau/bjetsLOG","eleTauPlots/eleTau_bjets.root","eleTau_X",3,"Number of b-Tagged Jets","",false,"#tau_{e}#tau_{h}",true);

   makeLTauStack("eleTau/BoostPt","eleTauPlots/eleTau_BoostedPt.root","eleTau_SM1",3,"highest Jet P_{T}","GeV",false,"#tau_{e}#tau_{h}",true);
   makeLTauStack("eleTau/BoostEta","eleTauPlots/eleTau_BoostedEta.root","eleTau_SM1",3,"highest Jet #eta","GeV",false,"#tau_{e}#tau_{h}",true);



//    makeEMuStack("eleMu/pt1","eleMuPlots/pt1.root","eleMu_X",1,"e p_{T}","GeV",false,false);
//    makeEMuStack("eleMu/pt1LOG","eleMuPlots/pt1.root","eleMu_X",1,"e p_{T}","GeV",false,true);
// 
//    makeEMuStack("eleMu/pt2","eleMuPlots/pt2.root","eleMu_X",1,"#mu p_{T}","GeV",false,false);
//    makeEMuStack("eleMu/pt2LOG","eleMuPlots/pt2.root","eleMu_X",1,"#mu p_{T}","GeV",false,true);
// 
// 
//    makeEMuStack("eleMu/mvis","eleMuPlots/mvis.root","eleMu_X",1,"m_{vis}","GeV",false,false);
//    makeEMuStack("eleMu/mvisLOG","eleMuPlots/mvis.root","eleMu_X",1,"m_{vis}","GeV",false,true);
// 
//    makeEMuStack("eleMu/sv","eleMuPlots/sv.root","eleMu_X",1,"m_{#tau#tau}","GeV",false,false);
//    makeEMuStack("eleMu/svLOG","eleMuPlots/sv.root","eleMu_X",1,"m_{#tau#tau}","GeV",false,true);
// 
//    makeEMuStack("eleMu/mvis_NOB","eleMuPlots/mvis.root","eleMu_NoB",2,"m_{#tau#tau}","GeV",false,false);
//    makeEMuStack("eleMu/mvis_NOBLOG","eleMuPlots/mvis.root","eleMu_NoB",2,"m_{#tau#tau}","GeV",false,true);
// 
//    makeEMuStack("eleMu/sv_NOB","eleMuPlots/sv.root","eleMu_NoB",2,"m_{#tau#tau}","GeV",false,false);
//    makeEMuStack("eleMu/sv_NOBLOG","eleMuPlots/sv.root","eleMu_NoB",2,"m_{#tau#tau}","GeV",false,true);
// 
//    makeEMuStack("eleMu/mvis_B","eleMuPlots/mvis_LS.root","eleMu_B",1,"m_{vis}","GeV",false,false);
//    makeEMuStack("eleMu/mvis_BLOG","eleMuPlots/mvis_LS.root","eleMu_B",1,"m_{vis}","GeV",false,true);
// 
//    makeEMuStack("eleMu/sv_B","eleMuPlots/sv_LS.root","eleMu_B",1,"m_{#tau#tau}","GeV",false,false);
//    makeEMuStack("eleMu/sv_BLOG","eleMuPlots/sv_LS.root","eleMu_B",1,"m_{#tau#tau}","GeV",false,true);
// 
// 
//    makeEMuStack("eleMu/mvis_SM0","eleMuPlots/mvis.root","eleMu_SM0",3,"m_{vis}","GeV",false,false);
//    makeEMuStack("eleMu/mvis_SM0LOG","eleMuPlots/mvis.root","eleMu_SM0",3,"m_{vis}","GeV",false,true);
// 
//    makeEMuStack("eleMu/sv_SM0","eleMuPlots/sv.root","eleMu_SM0",3,"m_{#tau#tau}","GeV",false,false);
//    makeEMuStack("eleMu/sv_SM0LOG","eleMuPlots/sv.root","eleMu_SM0",3,"m_{#tau#tau}","GeV",false,true);
// 
// 
//    makeEMuStack("eleMu/mvis_SM1","eleMuPlots/mvis_LS.root","eleMu_SM1",3,"m_{vis}","GeV",false,false);
//    makeEMuStack("eleMu/mvis_SM1LOG","eleMuPlots/mvis_LS.root","eleMu_SM1",3,"m_{vis}","GeV",false,true);
// 
//    makeEMuStack("eleMu/sv_SM1","eleMuPlots/sv_LS.root","eleMu_SM1",3,"m_{#tau#tau}","GeV",false,false);
//    makeEMuStack("eleMu/sv_SM1LOG","eleMuPlots/sv_LS.root","eleMu_SM1",3,"m_{#tau#tau}","GeV",false,true);
// 
//    makeEMuStack("eleMu/mvis_SM2","eleMuPlots/mvis_LS.root","eleMu_SM2",3,"m_{vis}","GeV",false,false);
//    makeEMuStack("eleMu/mvis_SM2LOG","eleMuPlots/mvis_LS.root","eleMu_SM2",3,"m_{vis}","GeV",false,true);
// 
//    makeEMuStack("eleMu/sv_SM2","eleMuPlots/sv_LS.root","eleMu_SM2",3,"m_{#tau#tau}","GeV",false,false);
//    makeEMuStack("eleMu/sv_SM2LOG","eleMuPlots/sv_LS.root","eleMu_SM2",3,"m_{#tau#tau}","GeV",false,true);






}

