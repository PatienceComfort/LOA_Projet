#ifndef PERSO_H
#define PERSO_H

#include <vector>
#include "Objet.hpp"
class Perso{
protected:
  std::string nom;
  int sante;
  int hab;
  std::string nomArme;
  //ajouter le sac
  std::vector <Objet> sac;

public:
  Perso();
  int getSante();
  int getHab();
  void recoitAttaque(int perte);
  int getBagCapacity();
  int getRemainSpace();
  void addToBag(Objet obj);
  //void removeFromBag(Objet obj);

};

//notons que l'augmentation de l'indice d'habilité vient avec une augmentation de la capacité du sac
#endif
