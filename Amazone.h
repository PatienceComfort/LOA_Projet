#ifndef AMAZONE
#define AMAZONE

#include <iostream>
#include "Personnage.h"

class Amazone:public Personnage{

public:
  Amazone();
  void lancerAttaque(Personnage * adversaire, int loss);
  void presentAdv();
};

#endif
