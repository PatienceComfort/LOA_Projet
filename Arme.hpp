#ifndef ARME
#define ARME
#include "Objet.h"

class Arme : public Objet{
private:
  int niveau;
  int nbUti;
public:
  Arme();
  virtual ~Arme();
  
};

#endif
