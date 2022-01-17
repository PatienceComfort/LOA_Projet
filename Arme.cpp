#include "Arme.h"

Arme::Arme(): Objet(){}

void Arme::augNiveau(){
    this->niveau += 1;
}