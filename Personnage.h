#ifndef PERSONNAGE
#define PERSONNAGE

#include <iostream>
#include <string>

class Personnage{
protected:
  std::string nom;
  std::string nomArme;
  int sante;
  int hab;
  int chance;
public:
  Personnage();
  int getSante();
  int getHab();
  int getChance();
  void lancerAttaque(Personnage * adversaire, int loss);//surchargé chez les filles
  void recoitAttaque(int perte);
  void leverBouclier(int protection);
  void presentAdv(); //surchargé chez les filles
  void augHab();
  void augSante(int augmentation);
  void augChance(int teleport);
  void utiliserPotion(bool typeDePotion);
  void utiliserCle();
};


#endif




}


#endif
