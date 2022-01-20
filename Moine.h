#ifndef MOINE
#define MOINE
#include "Perso.h"

class Moine: public Perso {
private:
  std::string nomArme;

public:
  Moine();
  void lancerAttaque(Perso *adversaire);//un coup de Poignard retire 10 points de vie à l'adversaire
  void presentation_adv();
  //virtual ~Moine();
};

#endif