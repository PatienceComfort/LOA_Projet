#ifndef MEDIC
#define MEDIC
#include "Objet.hpp"

class Medicament: public Objet {
private:
  int niveau;
public:
  Medicament (int recup);
  //virtual ~Medicament ();
};

#endif
