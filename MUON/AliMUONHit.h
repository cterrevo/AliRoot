#ifndef ALIMUONHIT_H
#define ALIMUONHIT_H
/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */

/* $Id$ */

#include "AliHit.h"

class AliMUONHit : public AliHit {

 public:
    
    AliMUONHit() {}
    AliMUONHit(Int_t fIshunt, Int_t track, Int_t *vol, Float_t *hits);
    virtual ~AliMUONHit() {}
    Int_t   Chamber()  {return fChamber;}
    Float_t Particle() {return fParticle;}    
    Float_t Theta()    {return fTheta;}
    Float_t Phi()      {return fPhi;}
    Float_t Tlength()  {return fTlength;}
    Float_t Eloss()    {return fEloss;}
    Float_t Age()      {return fAge;}
    Int_t   PHfirst()  {return fPHfirst;}
    Int_t   PHlast()   {return fPHlast;}
    Float_t Momentum() {return fPTot;}
    Float_t Cx()       {return fCxHit;}
    Float_t Cy()       {return fCyHit;}
    Float_t Cz()       {return fCzHit;}
 private:
    Int_t     fChamber;       // Chamber number
    Float_t   fParticle;      // Geant3 particle type
    Float_t   fTheta ;        // Incident theta angle in degrees      
    Float_t   fPhi   ;        // Incident phi angle in degrees
    Float_t   fTlength;       // Track length inside the chamber
    Float_t   fEloss;         // ionisation energy loss in gas
    Float_t   fAge;           // Particle Age
    Int_t     fPHfirst;       // first padhit
    Int_t     fPHlast;        // last padhit

    Float_t   fPTot;          // hit local momentum P
    Float_t   fCxHit;         // Px/P
    Float_t   fCyHit;         // Py/P
    Float_t   fCzHit;         // Pz/P
    
    ClassDef(AliMUONHit,1)    //Hit object for MUON
};
#endif
