#ifndef BOUCLIER
#define BOUCLIER
#include "Objet.hpp"

class Bouclier : public Objet{
private:
  int niveau;
  int nbUti;
public:
  Bouclier(int protection);
  //virtual ~Bouclier();
  
};

#endif
