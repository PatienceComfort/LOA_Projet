#ifndef SORCIERE
#define SORCIERE


#include <iostream>
#include "Personnage.h"

class Sorciere:public Personnage{

public:
  Sorciere();
  void lancerAttaque(Personnage * adversaire, int loss);
  void presentAdv();
};
#endif
