#ifndef TENERGYCAL_H__
#define TENERGYCAL_H__

#include "TCal.h"
#include "TPeak.h"
#include "TSpectrum.h"

class TEnergyCal : public TCal {
 public: 
   TEnergyCal();
   TEnergyCal(const char* name, const char* title) : TCal(name,title){}
   ~TEnergyCal(); 

 public:
   std::vector<Double_t> GetParameters() const;
   Double_t GetParameter(Int_t parameter) const;

   void Clear(Option_t *opt = "");
   void Print(Option_t *opt = "") const;

   Bool_t IsGroupable() const {return true;}

 private:
   
   ClassDef(TEnergyCal,1);

};

#endif
