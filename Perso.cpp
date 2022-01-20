#include "Perso.h"
using namespace std;
#include <iostream>



Perso::Perso():nom(" "), sante(100), hab(1), chance(0){
  
}

int Perso::getSante(){
  return this->sante;
}

int Perso::getHab(){
  return this ->hab;
}

int Perso::getChance(){
  return this->chance;
}

void Perso::recoitAttaque(int perte){
  this->sante -= perte;
}

void Perso::leverBouclier(int protection){
  this->sante += protection;
}


void Perso::lancerAttaque(Perso * adversaire,int rand){
  if(rand==1){
    adversaire->recoitAttaque(10);//attaque d'un moine
    cout<<"Un vicieux coup de Poignard !!"<<endl;
  }
  else if(rand==2){
    adversaire->recoitAttaque(5);//attaque d'une sorciere
    cout<<"Attaque magique !!"<<endl;
  }
  else if(rand==3){
    adversaire->recoitAttaque(5);//attaque d'un guerrier
    cout<<"Un coup d'epée !!"<<endl;
  }
  else if(rand==4){
    adversaire->recoitAttaque(15);//attaque d'une amazone
    cout<<"Un coup de lance !!"<<endl;
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
void Perso::augChance(){
  this->chance += 1;
}
void Perso::usePotion(){
  int danger = rand()%2;
  if(danger==0){
    cout <<"Ah vous avez retrouvé des forces grâce à ce remède"<<endl;
    this->sante += 25;
  }
  else if(danger==1){
    cout <<"Oh non! Du poison!Vous perdez 15 points de santé"<<endl;
    this->sante -= 15;
  }
}

void Perso::useKey(){
  this->chance+=10;
}

void Perso::afficherStats(){
  cout<< "Votre sante:" << this->getSante()<<" , votre habilité (niveau arme et bouclier):" << this->getHab()<<endl;
}

Perso::~Perso(){}