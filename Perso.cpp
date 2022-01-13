#include "Perso.h"

Perso::Perso():nom(" "), sante(100), hab(1){
  cout << "un personnage a été crée!"<<endl;
}

int Perso::getSante(){
  return this->sante;
}

int Perso::getHab(){
  return this ->hab;
}

void Perso::recoitAttaque(int perte){
  this->sante -= perte;
}
