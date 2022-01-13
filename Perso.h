#ifndef PERSO_H
#define PERSO_H

class Perso{
protected:
  std::string nom;
  int sante;
  int hab;
  std::string nomArme;

public:
  Perso();
  int getSante();
  int getHab();
  void recoitAttaque(int perte);
};

//notons que l'augmentation de l'indice d'habilité vient avec une augmentation de la capacité du sac
#endif
