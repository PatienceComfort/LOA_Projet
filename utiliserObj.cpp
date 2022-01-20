#include "Objet.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Sac.h"
void utilObj(Sac * sac, Perso * nom_perso){
    if(sac->getBagCapacity()<3){
      cout << "Vous n'avez rien dans votre sac sauf votre arme et votre bouclier"<<endl;
    }else{
      //cout << "Voici les objets de votre sac : " << sac->getNameObj(2)<<endl;
      //sac->getContenu();
      cout << "Quel objet voulez-vous utilisé ?"<< endl;
      int useObj;
      cin >> useObj;
      if(useObj==1){
        Objet * obj1= sac->getContenu(2);
        if(obj1->getName()=="Cle"){
          nom_perso->useKey();
          cout<<"Cle utilisé"<<endl;
        }
        else{
          nom_perso->usePotion();
          cout<<"Potion utilisé"<<endl;
        }
        sac->removeFromBag(2);
      }
      else{
          Objet * obj2= sac->getContenu(3);
        if(obj2->getName()=="Cle"){
          nom_perso->useKey();
          cout<<"Cle utilisé"<<endl;
        }
        else{
          nom_perso->usePotion();
          cout<<"Potion utilisé"<<endl;
        }
        sac->removeFromBag(3);
      
      
    }
    }
}
