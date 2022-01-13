#include "Objet.h"

Objet::Objet():nbUti(0), niveau(1){}

int Objet::getUti(){
  return this->nbUti;
}

int Objet::getNiveau(){
  return this ->niveau;
}
