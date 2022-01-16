#include "Sorciere.hpp"

Sorciere::Sorciere():Perso(), nomArme("Baguette Magique"){
  std::cout << "Ahhh! Une sorcière!! Redoutable"<<std::endl;
}

void Sorciere::attaqueMagique(Perso * adversaire){
  adversaire->recoitAttaque(5);
  std::cout <<"Attaque magique!"<<std::endl;
}
