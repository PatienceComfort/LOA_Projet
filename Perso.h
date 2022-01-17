#ifndef PERSO_H
#define PERSO_H
#include <iostream>
#include <vector>
#include "Arme.h"
#include "Bouclier.h"

class Perso{
protected:
  std::string nom;
  int sante;
  int hab;
  std::string nomArme;
  //ajouter le sac
  std::vector <Objet*> sac;
  Arme * arme;
  Bouclier * bouclier;
  int chance;

public:
  Perso();
  int getSante();
  int getHab();
  void recoitAttaque(int perte);
  void leverBouclier(int protection);
  void augHabilite();
  void augSante();
  Arme * getArme();
  Bouclier * getBouclier();
  void useKey();//chance +1
  int getBagCapacity();
  int getRemainSpace();
  //void addToBag(Objet obj);
  //void removeFromBag(Objet obj);

};

#endif
