
#include <iostream>
using namespace std;
#include "Personnage.h"
#include "Sorciere.h"

Sorciere::Sorciere():Personnage(),nomArme("Baguette magique"){

}

void Sorciere::lancerAttaque(Personnage * adversaire, int loss = 5) {
  adversaire->recoitAttaque(loss);
}
void Sorciere::presentAdv(){
  cout<<"Mes pouvoirs magiques me permettrons de te vaincre en deux tours"<<endl;
}
