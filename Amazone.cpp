
#include <iostream>
using namespace std;
#include "Amazone.h"
#include "Personnage.h"

Amazone::Amazone():Personnage(),nomArme("Lance"){

}

void Amazone::lancerAttaque(Personnage * adversaire, int loss = 15) {
  adversaire->recoitAttaque(loss);
}
void Amazone::presentAdv(){
  cout<<"N'as tu pas peur, ma lance est reconnue dans toutes les contrées. Je suis imbattable"<<endl;
}
