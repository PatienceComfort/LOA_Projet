#include "Sorciere.h"

Sorciere::Sorciere():Perso(), nomArme("Baguette Magique"){
  std::cout << "Ahhh! Une sorcière!! Redoutable"<<std::endl;
}

void Sorciere::lancerAttaque(Perso *adversaire){
  adversaire->recoitAttaque(5);
  std::cout <<"Attaque magique!"<<std::endl;
}

void Sorciere::presentation_adv(){
  std::cout << "Ah ah tu n'est pas de taille contre ma magie !" << std::endl;
}