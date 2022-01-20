#include "Moine.h"

Moine::Moine():Perso(), nomArme("Poignard"){
  std::cout <<"Un moine! Dans ce chateau!? Eh ben je souhaite bon courage à vos adversaires"<<std::endl;
}

/*
void Moine::lancerAttaque(Perso *adversaire){
  adversaire->recoitAttaque(10);
  std::cout << "Et hop! Un vicieux coup de Poignard"<<std::endl;
}
*/

void Moine::presentation_adv(){
  std::cout << "Ah ah ne te crois pas en sécurité parce que je suis un Moine !" << std::endl;
}

Moine::~Moine(){}