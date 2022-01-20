#include "Perso.h"
#include <iostream>



Perso::Perso():nom(" "), sante(100), hab(1), chance(0){
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


void Perso::lancerAttaque(Perso * adversaire,int rand){
  if(rand==1){
    adversaire->recoitAttaque(10);
  }
  else if(rand==2){
    adversaire->recoitAttaque(5);
  }
  else if(rand==3){
  adversaire->recoitAttaque(5);
  }
  else if(rand==4){
    adversaire->recoitAttaque(15);
  }
}

void Perso::augHabilite(){
  this->hab +=1;
}

void Perso::augSante(){
  if (sante<50){
    this->sante +=50;
  }
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