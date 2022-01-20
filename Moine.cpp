
#include <iostream>
using namespace std;
#include "Personnage.h"
#include "Moine.h"

Moine::Moine():Personnage(),nomArme("Poignard"){

}

void Moine::lancerAttaque(Personnage * adversaire, int loss = 10) {
  adversaire->recoitAttaque(loss);
}
void Moine::presentAdv(){
  cout<<"Je prierais pour ton ame. Mais seulment après t'avoir battu!"<<endl;
}
