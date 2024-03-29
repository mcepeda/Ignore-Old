#include "UWAnalysis/RecoTools/interface/CompositePtrCandidateT1T2MEtProducer.h"

#include "DataFormats/Candidate/interface/Candidate.h" 
#include "DataFormats/PatCandidates/interface/Muon.h" 
#include "DataFormats/PatCandidates/interface/Tau.h" 

typedef CompositePtrCandidateT1T2MEtProducer<reco::Candidate, reco::Candidate> DiCandidatePairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Jet, pat::Jet> PATJetPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Muon, pat::Tau> PATMuTauPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Muon, pat::Muon> PATMuPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Electron, pat::Electron> PATElePairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Electron, pat::Muon> PATEleMuPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Electron, pat::Tau> PATEleTauPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Electron, reco::RecoEcalCandidate> PATEleSCPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Muon, reco::RecoChargedCandidate> PATMuTrackPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Muon, pat::Jet> PATMuJetPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Electron,reco::RecoChargedCandidate> PATEleTrackPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<pat::Tau,pat::Tau> PATDiTauPairProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATMuPair,PATJetPair> PATMuMuJJQuadProducer; ///IO
typedef CompositePtrCandidateT1T2MEtProducer<PATMuPair,PATMuTauPair> PATMuMuMuTauQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATMuPair,PATDiTauPair> PATMuMuTauTauQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATMuPair,PATElecTauPair> PATMuMuEleTauQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATMuPair,PATElecMuPair> PATMuMuEleMuQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATMuPair,PATElecPair> PATMuMuEleEleQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATMuPair,PATMuPair> PATMuMuMuMuQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATElecPair,PATElecTauPair> PATEleEleEleTauQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATElecPair,PATDiTauPair> PATEleEleTauTauQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATElecPair,PATElecPair> PATEleEleEleEleQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATElecPair,PATMuTauPair> PATEleEleMuTauQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATElecPair,PATElecMuPair> PATEleEleEleMuQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATElecPair,PATMuPair> PATEleEleMuMuQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATMuonNuPair,PATJetPair> PATMuNuJetJetQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATElectronNuPair,PATJetPair> PATEleNuJetJetQuadProducer;
typedef CompositePtrCandidateT1T2MEtProducer<PATTauNuPair,PATJetPair> PATTauNuJetJetQuadProducer;


#include "FWCore/Framework/interface/MakerMacros.h"

DEFINE_FWK_MODULE(DiCandidatePairProducer);
DEFINE_FWK_MODULE(PATJetPairProducer);
DEFINE_FWK_MODULE(PATMuTauPairProducer);
DEFINE_FWK_MODULE(PATMuPairProducer);
DEFINE_FWK_MODULE(PATEleTauPairProducer);
DEFINE_FWK_MODULE(PATEleSCPairProducer);
DEFINE_FWK_MODULE(PATElePairProducer);
DEFINE_FWK_MODULE(PATEleMuPairProducer);
DEFINE_FWK_MODULE(PATMuTrackPairProducer);
DEFINE_FWK_MODULE(PATMuJetPairProducer);
DEFINE_FWK_MODULE(PATEleTrackPairProducer);
DEFINE_FWK_MODULE(PATDiTauPairProducer);
DEFINE_FWK_MODULE(PATMuMuJJQuadProducer); 
DEFINE_FWK_MODULE(PATMuMuMuTauQuadProducer);
DEFINE_FWK_MODULE(PATMuMuTauTauQuadProducer);
DEFINE_FWK_MODULE(PATMuMuEleTauQuadProducer);
DEFINE_FWK_MODULE(PATMuMuEleMuQuadProducer);
DEFINE_FWK_MODULE(PATMuMuEleEleQuadProducer);
DEFINE_FWK_MODULE(PATMuMuMuMuQuadProducer);
DEFINE_FWK_MODULE(PATEleEleEleTauQuadProducer);
DEFINE_FWK_MODULE(PATEleEleTauTauQuadProducer);
DEFINE_FWK_MODULE(PATEleEleEleEleQuadProducer);
DEFINE_FWK_MODULE(PATEleEleMuTauQuadProducer);
DEFINE_FWK_MODULE(PATEleEleEleMuQuadProducer);
DEFINE_FWK_MODULE(PATEleEleMuMuQuadProducer);
DEFINE_FWK_MODULE(PATMuNuJetJetQuadProducer);
DEFINE_FWK_MODULE(PATEleNuJetJetQuadProducer);
DEFINE_FWK_MODULE(PATTauNuJetJetQuadProducer);

