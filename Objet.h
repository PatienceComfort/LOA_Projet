#ifndef OBJET
#define OBJET

#include <iostream>

class Objet {
  friend class Personnage;
protected:
  //int nbUti;//utile??
  int niveau;
  std::string name;
public:
  Objet();
  //virtual ~Objet();
  //int getUti();
  int getNiveau();
  void augNiveau();
  void setName(std::string nomObj);
  std::string getName();
};

#endif
