import FWCore.ParameterSet.Config as cms

#Import tool that creates the cut sequence
from UWAnalysis.Configuration.tools.CutSequenceProducer import *
from UWAnalysis.Configuration.tools.analysisTools import *


############### Define Cuts #######################################
DiMuonPreSel='leg1.isGlobalMuon && leg1.isTrackerMuon && leg2.isGlobalMuon && leg2.isTrackerMuon && leg1.pt()>20 && leg2.pt()>20'
DiMuonPreSel2='(leg1.isolationR03().sumPt+leg1.isolationR03().emEt+leg1.isolationR03().hadEt)/leg1.pt()<0.3 '
DiMuonPreSel3='(leg2.isolationR03().sumPt+leg2.isolationR03().emEt+leg2.isolationR03().hadEt)/leg2.pt()<0.3 '

munuKIN='lepton.pt()>25 && abs(lepton.eta())<2.1'
munuSel='lepton.userFloat("isWWMuon")==1'#(lepton.isolationR03().sumPt+lepton.isolationR03().emEt+lepton.isolationR03().hadEt)/lepton.pt()<0.3&&met.pt()>30&mt>40&&lepton.userFloat("isWWMuon")==1'

elenuKIN='lepton.pt()>30 && abs(lepton.eta())<2.5&&(abs(lepton.eta)<1.4442||abs(lepton.eta)>1.5666)'
elenuSel='(lepton.isEB &&(lepton.sigmaIetaIeta<0.01)&&(-0.8<lepton.deltaPhiSuperClusterTrackAtVtx<0.8 ) && ( -0.007<lepton.deltaEtaSuperClusterTrackAtVtx<0.007) ) || (lepton.isEE &&(lepton.sigmaIetaIeta<0.03)&&(-0.7<lepton.deltaPhiSuperClusterTrackAtVtx<0.7 ) && ( -0.01<lepton.deltaEtaSuperClusterTrackAtVtx<0.01) )'

DiElePreSel='leg1.pt>20&&leg2.pt>20'
DiElePreSel2='(leg1.isEB &&(leg1.sigmaIetaIeta<0.01)&&(-0.8<leg1.deltaPhiSuperClusterTrackAtVtx<0.8 ) && ( -0.007<leg1.deltaEtaSuperClusterTrackAtVtx<0.007) ) || (leg1.isEE &&(leg1.sigmaIetaIeta<0.03)&&(-0.7<leg1.deltaPhiSuperClusterTrackAtVtx<0.7 ) && ( -0.01<leg1.deltaEtaSuperClusterTrackAtVtx<0.01) )'
DiElePreSel2='(leg2.isEB &&(leg2.sigmaIetaIeta<0.01)&&(-0.8<leg2.deltaPhiSuperClusterTrackAtVtx<0.8 ) && ( -0.007<leg2.deltaEtaSuperClusterTrackAtVtx<0.007) ) || (leg2.isEE &&(leg2.sigmaIetaIeta<0.03)&&(-0.7<leg2.deltaPhiSuperClusterTrackAtVtx<0.7 ) && ( -0.01<leg2.deltaEtaSuperClusterTrackAtVtx<0.01) )'
DiElePreSel3='(leg1.chargedHadronIso+leg1.photonIso()+leg1.neutralHadronIso())/leg1.pt()<0.3&&(leg2.chargedHadronIso+leg2.photonIso()+leg2.neutralHadronIso())/leg2.pt()<0.3'


######################__________________________________MNJ_____________________________________##############################

MNJanalysisConfigurator = CutSequenceProducer(initialCounter  = 'initialEventsMNJ',
                                  pyModuleName = __name__,
                                  pyNameSpace  = locals())




#Make Di Muons to VETO DY
#MNJanalysisConfigurator.addDiCandidateModule('diMuons','PATMuPairProducer', 'patMuonsForAnalysis','patMuonsForAnalysis','patMETs','patJetsForAnalysis',0,9999,text = '',dR=0.5,recoMode = "")
#MNJanalysisConfigurator.addSelector('diMuonsSel','PATMuPairSelector',DiMuonPreSel+'&&'+DiMuonPreSel2+'&&'+DiMuonPreSel3,'diMuonSel',0,999)
#MNJanalysisConfigurator.addSorter('diMuonsSorted','PATMuPairSorter')

#Make Muons+MET
MNJanalysisConfigurator.addCandidateMETModule('wCands','PATMuonNuPairProducer','patMuonsForAnalysis','patMETs','patJetsForAnalysis',1,9999,'AtLeastOneWCandidate',genParticles="genDaughters")
#MNJanalysisConfigurator.addSelector('wCandsTight','PATMuonNuPairSelector',munuTight,'tightID',1)
MNJanalysisConfigurator.addSelector('wCandsKIN','PATMuonNuPairSelector',munuKIN,'wCandsKIN',1)
MNJanalysisConfigurator.addSelector('wCandsSel','PATMuonNuPairSelector',munuSel,'wCandsSel',1)

MNJanalysisConfigurator.addDiCandidateModule('diMuons','PATMuPairProducer', 'patMuonsForAnalysis','patMuonsForAnalysis','patMETs','patJetsForAnalysis',0,9999,text = '',dR=0.5,recoMode = "")
MNJanalysisConfigurator.addSelector('diMuonsSel','PATMuPairSelector',DiMuonPreSel+'&&'+DiMuonPreSel2+'&&'+DiMuonPreSel3,'diMuonSel',0,999)
MNJanalysisConfigurator.addSorter('diMuonsSorted','PATMuPairSorter')




#create the sequence
MNJselectionSequence =MNJanalysisConfigurator.returnSequence()

######################__________________________________ENJ_____________________________________##############################

ENJanalysisConfigurator = CutSequenceProducer(initialCounter  = 'initialEventsENJ',
                                  pyModuleName = __name__,                                  pyNameSpace  = locals())

#Make Di Muons to VETO DY
ENJanalysisConfigurator.addDiCandidateModule('diElecs','PATElePairProducer', 'convRejElectrons','convRejElectrons','patMETs','patJetsForAnalysis',0,9999,text = '',dR=0.5,recoMode = "")
ENJanalysisConfigurator.addSelector('diElecsSel','PATElePairSelector',DiElePreSel+'&&'+DiElePreSel2+'&&'+DiElePreSel3,'diElecsSel',0,9999)
ENJanalysisConfigurator.addSorter('diElecsSorted','PATElePairSorter')

#Make Elecs+MET
ENJanalysisConfigurator.addCandidateMETModule('wCandsEle','PATElectronNuPairProducer','convRejElectrons','patMETs','patJetsForAnalysis',1,9999,'AtLeastOneWCandidateELE',genParticles="genDaughters")
ENJanalysisConfigurator.addSelector('wCandsKINEle','PATElectronNuPairSelector',elenuKIN,'wCandsKINEle',1)
ENJanalysisConfigurator.addSelector('wCandsSelEle','PATElectronNuPairSelector',elenuSel,'wCandsSelEle',1)

#create the sequence
ENJselectionSequence =ENJanalysisConfigurator.returnSequence()



