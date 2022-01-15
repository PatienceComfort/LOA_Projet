#include <iostream>
#include "Perso.hpp"


Perso::Perso():nom(" "), sante(100), hab(1){
  std::cout << "un personnage a été crée!"<<std::endl;
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


int Perso::getBagCapacity(){
  return this->sac.size();
}


int Perso::getRemainSpace(){
  int remain = 4 - getBagCapacity();
  return remain;
}

/*
void Perso::addToBag(Objet obj){
  this -> sac.insert(obj);
}*/
