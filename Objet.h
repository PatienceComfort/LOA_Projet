#ifndef OBJET
#define OBJET
#include <iostream>


class Objet {
  friend class Perso;
private:
  int nbUti;//utile??
  int niveau;
public:
  Objet();
  //virtual ~Objet();
  int getUti();
  int getNiveau();
};

#endif