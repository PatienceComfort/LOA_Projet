#include "Objet.h"

Objet::Objet():nbUti(0), niveau(1), name(""){}

int Objet::getUti(){
  return this->nbUti;
}

int Objet::getNiveau(){
  return this ->niveau;
}

void Objet::augNiveau(){
    std::cout<<"niveau augmenté"<<std::endl;
    this->niveau += 1;
}

std::string Objet::getName(){
  return this->name;
}