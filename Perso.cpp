#include "Perso.h"
#include <iostream>



Perso::Perso():nom(" "), sante(100), hab(1), chance(0), sac{}{
  Arme * arme;
  Bouclier * bouclier;
  sac.push_back(arme);
  sac.push_back(bouclier);
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

void Perso::leverBouclier(int protection){
  this->sante += protection;
}

void Perso::augHabilite(){
  this->hab +=1;
}

void Perso::augSante(){
  if (sante<50){
    this->sante +=50;
  }
}
Arme * Perso::getArme(){
  return arme;
}

Bouclier * Perso::getBouclier(){
  return bouclier;
}

void Perso::useKey(){

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