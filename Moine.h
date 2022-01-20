#ifndef MOINE
#define MOINE

#include <iostream>
#include "Personnage.h"

class Moine:public Personnage{

public:
  Moine();
  void lancerAttaque(Personnage * adversaire, int loss);
  void presentAdv();
};




#endif
