#ifndef SORCIERE
#define SORCIERE
#include "Perso.h"

class Sorciere:public Perso {
private:
  std::string nomArme;

public:
  Sorciere ();
  //void lancerAttaque(Perso *adversaire);//la soricère lance une attaque magique qui retire 5 points de vie
  void presentation_adv();
  ~Sorciere();
};

#endif