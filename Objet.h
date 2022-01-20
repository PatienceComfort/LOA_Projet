#ifndef OBJET
#define OBJET
#include <iostream>


class Objet {
  friend class Perso;
protected:
  int nbUti;//utile??
  int niveau;
  std::string name;
public:
  Objet();
  //virtual ~Objet();
  int getUti();
  int getNiveau();
  void augNiveau();
  std::string getName();
};

#endif