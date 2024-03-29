#ifndef __UWAnalysis_DataFormats_Analysis_CompositeRefCandidateT1T2MEt_h__
#define __UWAnalysis_DataFormats_Analysis_CompositeRefCandidateT1T2MEt_h__



#include "DataFormats/Candidate/interface/CandidateFwd.h"
#include "DataFormats/Candidate/interface/Candidate.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/MET.h"

#include "DataFormats/RecoCandidate/interface/RecoChargedCandidate.h"
#include "DataFormats/RecoCandidate/interface/RecoEcalCandidate.h"
#include "DataFormats/Candidate/interface/LeafCandidate.h"
#include "DataFormats/Common/interface/Ptr.h"

#include "AnalysisDataFormats/TauAnalysis/interface/NSVfitResonanceHypothesisSummary.h"

#include "UWAnalysis/DataFormats/interface/tauAnalysisAuxFunctions.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"


template<typename T1, typename T2>
class CompositePtrCandidateT1T2MEt : public reco::LeafCandidate
{
  typedef edm::Ptr<T1> T1Ptr;
  typedef edm::Ptr<T2> T2Ptr;
  typedef edm::Ptr<pat::Jet> JetPtr;
  typedef edm::Ptr<pat::MET> METPtr;

 public:

  /// default constructor
  CompositePtrCandidateT1T2MEt() {}

  /// constructor with MEt
  CompositePtrCandidateT1T2MEt(const T1Ptr leg1, const T2Ptr leg2, const reco::CandidatePtr met)
    : leg1_(leg1), leg2_(leg2), met_(met), covMatrix_(2,2) {}

  /// constructor without MEt
  CompositePtrCandidateT1T2MEt(const T1Ptr leg1, const T2Ptr leg2)
    : leg1_(leg1), leg2_(leg2) {}

  /// destructor
  ~CompositePtrCandidateT1T2MEt() {}

  /// access to daughter particles
  const T1Ptr leg1() const { return leg1_; }
  const T2Ptr leg2() const { return leg2_; }


  const int genPdg1() const {return pdg1_; }
  const int genPdg2() const {return pdg2_; }

  /// access to gen. momenta
  reco::Candidate::LorentzVector p4gen() const { return p4Leg1gen() + p4Leg2gen(); }
  reco::Candidate::LorentzVector p4VisGen() const { return p4VisLeg1gen() + p4VisLeg2gen(); }

  /// access to gen. mother particles
  /// (undecayed tau leptons)
  const reco::Candidate::LorentzVector& p4Leg1gen() const { return p4Leg1gen_; }
  const reco::Candidate::LorentzVector& p4Leg2gen() const { return p4Leg2gen_; }

  /// access to visible gen. daughter particles
  /// (electrons, muons, kaons, charged and neutral pions produced in tau decay)
  const reco::Candidate::LorentzVector& p4VisLeg1gen() const { return p4VisLeg1gen_; }
  const reco::Candidate::LorentzVector& p4VisLeg2gen() const { return p4VisLeg2gen_; }

  /// energy ratio of visible gen. daughter/mother particles
  double x1gen() const { return ( p4Leg1gen_.energy() > 0. ) ? p4VisLeg1gen_.energy()/p4Leg1gen_.energy() : -1.; }
  double x2gen() const { return ( p4Leg2gen_.energy() > 0. ) ? p4VisLeg2gen_.energy()/p4Leg2gen_.energy() : -1.; }

  /// return the number of source particle-like Candidates
  /// (the candidates used to construct this Candidate)
  /// MET does not count.
  size_t numberOfSourceCandidatePtrs() const { return 2; }

  /// return a Ptr to one of the source Candidates
  /// (the candidates used to construct this Candidate)
  reco::CandidatePtr sourceCandidatePtr( size_type i ) const {
    if(i==0) return leg1();
    else if(i==1) return leg2();
    else assert(0);
  }

  /// access to missing transverse momentum
  const METPtr met() const { return met_; }

  // get sum of charge of visible decay products
  // (not need to declare it in CompositePtrCandidateT1T2MEt;
  //  already declared in Candidate base-class)

  /// get four-momentum of visible decay products
  const reco::Candidate::LorentzVector& p4Vis() const { return p4Vis_; }

  /// get four-momentum and scaling factors for momenta of visible decay products
  /// computed by collinear approximation
  const reco::Candidate::LorentzVector& p4CollinearApprox() const { return p4CollinearApprox_; }
  double x1CollinearApprox() const { return x1CollinearApprox_; }
  double x2CollinearApprox() const { return x2CollinearApprox_; }
  bool collinearApproxIsValid() const { return collinearApproxIsValid_; }
  double svMass() const { return svMass_; }

  /// get "pseudo" four-momentum computed by CDF method
  /// (for a description of the method, see e.g. CDF note 8972)
  const reco::Candidate::LorentzVector& p4CDFmethod() const { return p4CDFmethod_; }

  /// get transverse mass of visible decay products + missing transverse momentum
  double mt12MET() const { return mt12MET_; }

  /// get transverse mass of first/second
  /// visible decay product + missing transverse momentum
  double mt1MET() const { return mt1MET_; }
  double mt2MET() const { return mt2MET_; }

  /// get acoplanarity angle (angle in transverse plane) between visible decay products
  double dPhi12() const { return dPhi12_; }

  /// get separation in eta-phi between visible decay products
  double dR12() const { return dR12_; }

  /// get minimal/maximal pseudo-rapidity of visible decay products
  double visEtaMin() const { return visEtaMin_; }
  double visEtaMax() const { return visEtaMax_; }

  /// get acoplanarity angle (angle in transverse plane) between first/second
  /// visible decay product and missing transverse momentum
  double dPhi1MET() const { return dPhi1MET_; }
  double dPhi2MET() const { return dPhi2MET_; }

  /// get values of CDF-"zeta" variables
  /// (indicating the consistency of the missing transverse momentum observed in an event
  ///  with the hypothesis of originating from tau neutrinos)
  double pZeta() const { return pZeta_; }
  double pZetaVis() const { return pZetaVis_; }

  // MET projected along the direction of the nearest lepton if within pi/2 otherwise just full MET
  double projMET() const { return projMET_; }



  //Vertex variables

  //Z difference of the first and second leg after propagation of tracks to the beamspot
  double dz() const {return dZ12_;}
  //Z Position of the first leg and second leg
  double z1() const {return z1_;}
  double z2() const {return z2_;}
  //Distance of closest approach of the two tracks
  double dca() const {return dca_;}
  //Transverse Distance from beamspot of the crossing point of the two track trajectories
  double crossingPointDistance() const {return crossingPointDistance_;}


  //////RECOIL
  reco::Candidate::LorentzVector recoil() const {return recoil_;}
  reco::Candidate::LorentzVector calibratedMET() const {return calibratedMET_;}
  double recoilDPhi() const {return recoilDPhi_;}
  TMatrixD covMatrix() const {return covMatrix_;}


  //Jet variables
  int nJets() const {return jets_.size();}
  std::vector<JetPtr>  jets() const {return jets_;}
  double  ht() const {return ht_;}


  //VBF Variables
  float vbfMass() const {return vbfMass_;}
  float vbfDEta() const {return vbfDEta_;}
  float vbfDPhi() const {return vbfDPhi_;}
  float vbfPt1() const {return vbfPt1_;}
  float vbfPt2() const {return vbfPt2_;}
  float vbfDiJetPt() const {return vbfDiJetPt_;}
  float vbfDiTauPt() const {return vbfDiTauPt_;}
  float vbfEta1() const {return vbfEta1_;}
  float vbfEta2() const {return vbfEta2_;}
  float vbfDPhiHJ() const {return vbfDPhiHJ_;}
  float vbfC1() const {return vbfC1_;}
  float vbfC2() const {return vbfC2_;}
  float vbfMVA() const {return vbfMVA_;}

  int   vbfNJetsGap20() const {return vbfNJetsGap20_;}
  int   vbfNJetsGap30() const {return vbfNJetsGap30_;}



  //M JJ variables
  double mJJ() const {return mjj_;}
  double ptJJ() const {return ptjj_;}
  void setJJVariables(double mjj,double ptjj) {
    mjj_ = mjj;
    ptjj_ = ptjj;
  }

  /// clone  object
  CompositePtrCandidateT1T2MEt<T1,T2>* clone() const { return new CompositePtrCandidateT1T2MEt<T1,T2>(*this); }

  friend std::ostream& operator<<(std::ostream& out, const CompositePtrCandidateT1T2MEt<T1,T2>& dic) {
    out << "Di-Candidate m = " << dic.mass();
    return out;
  }


  // NSVFit getters and setters.  From C. Veelken
  /// get Mtautau solutions reconstructed by NSVfit algorithm
  void addNSVfitSolution(const NSVfitResonanceHypothesisSummary& solution) {
    nSVfitSolutions_.push_back(solution);
  }

  bool hasNSVFitSolutions() const { return (nSVfitSolutions_.begin() != nSVfitSolutions_.end()); }

  const NSVfitResonanceHypothesisSummary* nSVfitSolution(
      const std::string& algorithm, int* errorFlag = 0) const {
    const NSVfitResonanceHypothesisSummary* retVal = 0;
    for (std::vector<NSVfitResonanceHypothesisSummary>::const_iterator
        nSVfitSolution = nSVfitSolutions_.begin();
        nSVfitSolution != nSVfitSolutions_.end(); ++nSVfitSolution ) {
      if ( nSVfitSolution->name() == algorithm ) {
        retVal = &(*nSVfitSolution);
        break;
      }
    }

    if ( !retVal ) {
      if ( errorFlag ) {
        (*errorFlag) = 1;
      }
    }

    return retVal;
  }
  void setSVMass(double svMass) { svMass_ = svMass; }



 private:

  /// allow only CompositePtrCandidateT1T2MEtAlgorithm to change values of data-members
  template<typename T1_type, typename T2_type> friend class CompositePtrCandidateT1T2MEtAlgorithm;
  template<typename T1_type, typename T2_type> friend class CompositePtrCandidateT1T2MEtVertexAlgorithm;
  template<typename T1_type, typename T2_type> friend class PATCandidatePairSVFitter;


  /// set gen. four-momenta
  void setP4Leg1gen(const reco::Candidate::LorentzVector& p4) { p4Leg1gen_ = p4; }
  void setP4Leg2gen(const reco::Candidate::LorentzVector& p4) { p4Leg2gen_ = p4; }
  void setP4VisLeg1gen(const reco::Candidate::LorentzVector& p4) { p4VisLeg1gen_ = p4; }
  void setP4VisLeg2gen(const reco::Candidate::LorentzVector& p4) { p4VisLeg2gen_ = p4; }

  void setPdg1(int pdg) {pdg1_ = pdg;}
  void setPdg2(int pdg) {pdg2_ = pdg;}

  /// set four-momentum of visible decay products
  void setP4Vis(const reco::Candidate::LorentzVector& p4) { p4Vis_ = p4; }
  /// set four-momentum and scaling factors for momenta of visible decay products
  /// computed by collinear approximation
  void setCollinearApproxQuantities(const reco::Candidate::LorentzVector& p4, double x1, double x2, bool isValid)
  {
    p4CollinearApprox_ = p4;
    x1CollinearApprox_ = x1;
    x2CollinearApprox_ = x2;
    collinearApproxIsValid_ = isValid;
  }
  /// set "pseudo" four-momentum computed by CDF method
  /// (for a description of the method, see e.g. CDF note 8972)
  void setP4CDFmethod(const reco::Candidate::LorentzVector& p4) { p4CDFmethod_ = p4; }
  /// set transverse mass of visible decay products + missing transverse momentum
  void setMt12MET(double mt) { mt12MET_ = mt; }
  /// set transverse mass of first/second
  /// visible decay product + missing transverse momentum
  void setMt1MET(double mt) { mt1MET_ = mt; }
  void setMt2MET(double mt) { mt2MET_ = mt; }
  /// set acoplanarity angle (angle in transverse plane) between visible decay products
  void setDPhi12(double dPhi) { dPhi12_ = dPhi; }
  /// set separation in eta-phi between visible decay products
  void setDR12(double dR) { dR12_ = dR; }
  /// set minimal/maximal pseudo-rapidity of visible decay products
  void setVisEtaMin(double eta) { visEtaMin_ = eta; }
  void setVisEtaMax(double eta) { visEtaMax_ = eta; }
  /// set acoplanarity angle (angle in transverse plane) between first/second
  /// visible decay product and missing transverse momentum
  void setDPhi1MET(double dPhi) { dPhi1MET_ = dPhi; }
  void setDPhi2MET(double dPhi) { dPhi2MET_ = dPhi; }
  /// set values of CDF-"zeta" variables
  void setPzeta(double pZeta) { pZeta_ = pZeta; }
  void setPzetaVis(double pZetaVis) { pZetaVis_ = pZetaVis; }
  /// set value of Projected MET
  void setProjMET(double projMET) { projMET_ = projMET; }
  void setCalibratedMET(const reco::Candidate::LorentzVector& met) { calibratedMET_ = met; }
  void setCovMatrix(TMatrixD covMatrix) { covMatrix_ = covMatrix; }



  /// set vertex variables
  void setVertexVariables(double dca,double crossingPointDistance, double dZ12, double Z1, double Z2) {
    dca_ = dca;
    crossingPointDistance_ = crossingPointDistance;
    dZ12_ = dZ12;
    z1_ = Z1;
    z2_ = Z2;
  }

  //set VBF Variables
  void setVBFVariables(float mass, float deta, float dphi, int jets20,int jets30,float pt1, float pt2, float dijetpt, float ditaupt, float eta1, float eta2, float dphihj, float c1, float c2, float mva) {
    vbfMass_ = mass;
    vbfDEta_ = deta;
    vbfDPhi_ = dphi;
    vbfNJetsGap20_ = jets20;
    vbfNJetsGap30_ = jets30;
    vbfPt1_=pt1;
    vbfPt2_=pt2;
    vbfDiJetPt_ = dijetpt;
    vbfDiTauPt_ = ditaupt;
    vbfEta1_=eta1;
    vbfEta2_=eta2;
    vbfDPhiHJ_ = dphihj;
    vbfC1_ = c1;
    vbfC2_ = c2;
    vbfMVA_ = mva;
    
  }



  /// set values of recoil
  void setRecoil(reco::Candidate::LorentzVector recoil) { recoil_ = recoil; }
  void setRecoilDPhi(double recoilDPhi) { recoilDPhi_ = recoilDPhi; }


  //jet variables
  void setJetVariables(std::vector<JetPtr> jets,double ht) {
    jets_ = jets;
    ht_ = ht;
  }
  /// references/pointers to decay products
  T1Ptr leg1_;
  T2Ptr leg2_;
  METPtr met_;
  reco::Candidate::LorentzVector calibratedMET_;

  /// gen. four-momenta
  reco::Candidate::LorentzVector p4Leg1gen_;
  reco::Candidate::LorentzVector p4Leg2gen_;
  reco::Candidate::LorentzVector p4VisLeg1gen_;
  reco::Candidate::LorentzVector p4VisLeg2gen_;


  //gen Pdg Id
  int pdg1_;
  int pdg2_;


  /// four-momentum of visible decay products
  reco::Candidate::LorentzVector p4Vis_;
  /// four-momentum and scaling factors for momenta of visible decay products computed by collinear approximation
  reco::Candidate::LorentzVector p4CollinearApprox_;
  bool collinearApproxIsValid_;
  double x1CollinearApprox_;
  double x2CollinearApprox_;
  /// "pseudo" four-momentum computed by CDF method
  reco::Candidate::LorentzVector p4CDFmethod_;
  /// transverse mass of visible decay products + missing transverse momentum
  double mt12MET_;
  /// transverse mass of first/second visible decay product + missing transverse momentum
  double mt1MET_;
  double mt2MET_;
  /// acoplanarity angle (angle in transverse plane) between visible decay products
  double dPhi12_;
  /// separation in eta-phi between visible decay products
  double dR12_;
  /// minimal/maximal pseudo-rapidity of visible decay products
  double visEtaMin_;
  double visEtaMax_;
  /// acoplanarity angle (angle in transverse plane) between first/second
  /// visible decay product and missing transverse momentum
  double dPhi1MET_;
  double dPhi2MET_;
  /// CDF-"zeta" variables
  double pZeta_;
  double pZetaVis_;
  /// Projected MET Variable
  double projMET_;

  /// Vertex variables
  double dca_;
  double crossingPointDistance_;
  double dZ12_;
  double z1_;
  double z2_;
  
  TMatrixD covMatrix_;


  //JJ variables
  double mjj_,ptjj_;

  //recoil
  reco::Candidate::LorentzVector recoil_;
  double recoilDPhi_;

  //jets
  std::vector<JetPtr> jets_;
  double ht_;
    
  //VBF
  double vbfMass_;
  double vbfDEta_;
  double vbfDPhi_;
  double vbfPt1_;
  double vbfPt2_;
  double vbfEta1_;
  double vbfEta2_;
  double vbfDiJetPt_;
  double vbfDiTauPt_;
  double vbfDPhiHJ_;
  double vbfC1_;
  double vbfC2_;
  double vbfMVA_;
  int vbfNJetsGap20_;
  int vbfNJetsGap30_;

  /// Mtautau solutions reconstructed by NSVfit algorithm
  std::vector<NSVfitResonanceHypothesisSummary> nSVfitSolutions_;
  double svMass_;

};

#include "DataFormats/PatCandidates/interface/Electron.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/Tau.h"
#include "UWAnalysis/DataFormats/interface/CompositePtrCandidateTMEt.h"

typedef CompositePtrCandidateT1T2MEt<reco::Candidate, reco::Candidate> DiCandidatePair;
typedef CompositePtrCandidateT1T2MEt<pat::Electron, pat::Tau> PATElecTauPair;
typedef CompositePtrCandidateT1T2MEt<pat::Electron, reco::RecoEcalCandidate> PATElecSCPair;
typedef CompositePtrCandidateT1T2MEt<pat::Muon, pat::Tau> PATMuTauPair;
typedef CompositePtrCandidateT1T2MEt<pat::Electron, pat::Jet> PATEleJetPair;
typedef CompositePtrCandidateT1T2MEt<pat::Muon, pat::Jet> PATMuJetPair;
typedef CompositePtrCandidateT1T2MEt<pat::Muon, reco::RecoChargedCandidate> PATMuTrackPair;
typedef CompositePtrCandidateT1T2MEt<pat::Tau, pat::Tau> PATDiTauPair;
typedef CompositePtrCandidateT1T2MEt<pat::Electron, pat::Muon> PATElecMuPair;
typedef CompositePtrCandidateT1T2MEt<pat::Electron, pat::Electron> PATElecPair;
typedef CompositePtrCandidateT1T2MEt<pat::Electron, reco::RecoChargedCandidate> PATEleTrackPair;
typedef CompositePtrCandidateT1T2MEt<pat::Muon, pat::Muon> PATMuPair;
typedef CompositePtrCandidateT1T2MEt<pat::Jet, pat::Jet> PATJetPair;

typedef CompositePtrCandidateT1T2MEt<PATMuPair,PATJetPair> PATMuMuJJQuad;
typedef CompositePtrCandidateT1T2MEt<PATMuPair,PATMuTauPair> PATMuMuMuTauQuad;
typedef CompositePtrCandidateT1T2MEt<PATMuPair,PATDiTauPair> PATMuMuTauTauQuad;
typedef CompositePtrCandidateT1T2MEt<PATMuPair,PATElecTauPair> PATMuMuEleTauQuad;
typedef CompositePtrCandidateT1T2MEt<PATMuPair,PATElecMuPair> PATMuMuEleMuQuad;
typedef CompositePtrCandidateT1T2MEt<PATMuPair,PATMuPair> PATMuMuMuMuQuad;
typedef CompositePtrCandidateT1T2MEt<PATMuPair,PATElecPair> PATMuMuEleEleQuad;
typedef CompositePtrCandidateT1T2MEt<PATElecPair,PATElecTauPair> PATEleEleEleTauQuad;
typedef CompositePtrCandidateT1T2MEt<PATElecPair,PATDiTauPair> PATEleEleTauTauQuad;
typedef CompositePtrCandidateT1T2MEt<PATElecPair,PATElecPair> PATEleEleEleEleQuad;
typedef CompositePtrCandidateT1T2MEt<PATElecPair, PATMuTauPair> PATEleEleMuTauQuad;
typedef CompositePtrCandidateT1T2MEt<PATElecPair, PATElecMuPair> PATEleEleEleMuQuad;
typedef CompositePtrCandidateT1T2MEt<PATElecPair, PATMuPair> PATEleEleMuMuQuad;

typedef CompositePtrCandidateT1T2MEt<PATMuonNuPair,PATJetPair> PATMuNuJetJetQuad;
typedef CompositePtrCandidateT1T2MEt<PATElectronNuPair,PATJetPair> PATEleNuJetJetQuad;
typedef CompositePtrCandidateT1T2MEt<PATTauNuPair,PATJetPair> PATTauNuJetJetQuad;

#endif
