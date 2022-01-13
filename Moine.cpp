#include "Moine.hpp"

Moine::Moine():Perso(), nomArme("Poignard"){
  std::cout <<"Un moine! Dans ce chateau!? Eh ben je souhaite bon courage à vos adversaires"<<endl;
}

void Moine::coupDePoignard(Perso adversaire){
  adversaire.recoitAttaque(10);
  std::cout << "Et hop! Un vicieux coup de Poignard"<<endl;
}
