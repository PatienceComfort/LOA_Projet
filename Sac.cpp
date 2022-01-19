#include <iostream>
#include "Sac.h"

Sac::Sac(){

}

void Sac::addToBag(Objet * objetAjoute){
    this->contenu.push_back(objetAjoute);
}
void Sac::removeFromBag(int index){
    this->contenu.erase(contenu.begin()+index);
}
int Sac::getBagCapacity(){
    return this->contenu.size();
}
int Sac::getRemainSpace(){
    return 2-this->getBagCapacity();
}
