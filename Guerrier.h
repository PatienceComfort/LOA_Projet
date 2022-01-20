#ifndef GUERRIER
#define GUERRIER

#include <iostream>
#include "Personnage.h"

class Guerrier:public Personnage{

public:
  Guerrier();
  void lancerAttaque(Personnage * adversaire, int loss);
  void presentAdv();
};

#endif
