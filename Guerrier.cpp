#include "Guerrier.hpp"

Guerrier::Guerrier():Perso(),nomArme("Epée"){
  std::cout << "Un véritable guerrier parmi nous? Voilà qui risque d'être sanglant!"<<endl;
}

Guerrier::coupDepee(Perso adversaire){
  adversaire.recoitAttaque(5);
  std::cout <<"Prends ça mécréant!"<<endl;
}
