#include "Objet.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Sac.h"
#include "Perso.h"
using namespace std;
void utilObj(Sac * sac, Perso * nom_perso){
  if(sac->getBagCapacity()<3){
    cout << "Vous n'avez rien dans votre sac sauf votre arme et votre bouclier"<<endl;
  }
  else{
    cout << "Voulez vous utiliser un objet ? (Oui:1, Non:0)"<<endl;
    int rep;
    cin>>rep;
    if (rep==1){
      if (sac->getBagCapacity()==3){
        cout<<"Voulez vous utiliser l'objet?"<<endl;
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
      else if(sac->getBagCapacity()==4){
        cout << "Quel objet voulez-vous utiliser ?"<< endl;
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
        else if(useObj==2){
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
      nom_perso->afficherStats();
    }
    else if(rep==0){
      cout<<"Pas d'objet utilisé."<<endl;
    }
  }
}
