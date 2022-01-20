#include "Objet.h"
#include <iostream>
using namespace std;
#include "Personnage.h"

Objet::Objet(): niveau(1), name(""){}
/*
int Objet::getUti(){
  return this->nbUti;
}*/

int Objet::getNiveau(){
  return this ->niveau;
}

void Objet::augNiveau(){
    std::cout<<"niveau augmenté"<<std::endl;
    this->niveau += 1;
}
void Objet::setName(std::string nomObj){
  this->name = nomObj;
}
std::string Objet::getName(){
  return this->name;
}
