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
  int chance;

public:
  Perso();
  int getSante();
  int getHab();
  void recoitAttaque(int perte);
  void leverBouclier(int protection);
  void augHabilite();
  void augSante();
  void useKey();//chance +1
  void usePotion();
  int getBagCapacity();
  int getRemainSpace();
  void addToBag(Objet * obj);
  //void getBagObj();
  std::vector <Objet*> getBag();
  void removeFromBag(Objet * obj, int index);


};

#endif
