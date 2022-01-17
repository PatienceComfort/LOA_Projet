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
  this->indSante -= perte;
}

void Perso::leverBouclier(int protection){
  this->sante += protection; // bouclier stop une attaque completement ??
}

void Perso::augHabilite(){
  this->hab +=1;
}

void Perso::augSante(){
  if (sante<100){
    this->sante +=50;
  }
}


int Perso::getBagCapacity(){
  return this->sac.size();
}

int Perso::getRemainSpace(){
  int remain = 4 - getBagCapacity();
  return remain;
}

void Perso::addToBag(Objet obj){
  this -> sac.insert(obj);
}

//celui là va necessiter la position de l'objet à enlever
/*
void Perso::removeFromBag(Objet obj){
  this ->
  //sac.erase(object position)
}*/
