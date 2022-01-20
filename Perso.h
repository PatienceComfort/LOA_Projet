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
  //std::vector <Objet*> sac;
  int chance;

public:
  Perso();
  int getSante();
  int getHab();
  int getChance();
  void recoitAttaque(int perte);
  void leverBouclier(int protection);
  void reduceSante(int damage);
  void lancerAttaque(Perso * adversaire,int rand);
  void augHabilite();
  void augSante();
  void augChance();
  void useKey();//chance +1
  void usePotion();
  void afficherStats();
  ~Perso();
};

#endif
