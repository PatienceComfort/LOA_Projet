
#include <iostream>
using namespace std;
#include "Guerrier.h"
#include "Personnage.h"

Guerrier::Guerrier():Personnage(),nomArme("Epée"){

}

void Guerrier::lancerAttaque(Personnage * adversaire, int loss = 15) {
  adversaire->recoitAttaque(loss);
}
void Guerrier::presentAdv(){
  cout<<"Mon épée m'apportera la victoire. En garde!"<<endl;
}
