#include "Objet.h"
#include "Sac.h"
#include "Potion.h"
#include "Cle.h"
using namespace std;

void depotObjet(Sac * sac){
    if (sac->getBagCapacity()<3){
        cout<<"Vous ne pouvez pas deposer d'objets."<<endl;
    }
    else{
        int choixDepot;
        cout<<"Voulez vous deposer le dernier objet de votre sac (Oui = 1, Non = 0"<<endl;
        cin>>choixDepot;
        if(choixDepot==1){
            sac->removeFromBag(sac->getBagCapacity());
        }
    }
}