#ifndef ARME
#define ARME
#include "Objet.h"

class Arme : public Objet{
protected:
  int niveau;
  int nbUti;
public:
  Arme();
  //void augNiveau();
  //virtual ~Arme();
  
};

#endif