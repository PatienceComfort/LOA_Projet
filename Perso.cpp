#include "Perso.h"
#include <iostream>



Perso::Perso():nom(" "), sante(100), hab(1), chance(0), sac{}{
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

int Perso::getBagCapacity(){
  return this->sac.size();
}


int Perso::getRemainSpace(){
  int remain = 4 - getBagCapacity();
  return remain;
}


void Perso::addToBag(Objet * obj){
  this->sac.push_back(obj);
}
/*
void Perso::getBagObj(){
  std::vector <Objet *> bag = this->getBag();
  std::cout<<"1: "<< bag[3]->getName()<<", 2: "<< bag[4]->getName()<<std::endl;

}
*/
std::vector<Objet*> Perso::getBag(){
  std::vector<Objet*> bag;
  for(int i; i<sac.size()+1; i++){
    bag.push_back(sac[i]);
  }
  return bag;
}

void Perso::removeFromBag(Objet * obj, int index){
  this->sac.erase(sac.begin()+index);
}

void Perso::usePotion(){
  int danger = rand()%2;
  if(danger==0){
    this->sante += 25;
  }
  else if(danger==1){
    this->sante -= 15;
  }
}

void Perso::useKey(){
  this->chance+=10;
}