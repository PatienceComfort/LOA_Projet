#include "Amazone.h"

Amazone::Amazone():Perso(), nomArme("Lance"){
  std::cout << "Une amazone! Et moi qui comptais faire une banquet après. Je n'auarais plus d'invités!!"<<std::endl;
}

void Amazone::coupDeLance(Perso *adversaire){
  adversaire->recoitAttaque(15);
  std::cout<<"Un coup de lance bien placé suffit!!"<<std::endl;
}

void Amazone::presentation_adv(){
  std::cout << "Ah ah quoi que je fasse on me le pardonnera ! Pourquoi ? Car je suis belle !" << std::endl;
}