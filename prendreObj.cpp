#include"Objet.h"
#include"Potion.h"
#include"Cle.h"
#include"Sac.h"
using namespace std;
void choixObjet(Sac * sac, int object1, int object2){
    cout << "Dans votre sac, vous avez de la place pour "<<sac->getRemainSpace()<<" objets"<< endl;
    cout <<"Quel objet voulez-vous prendre?"<<endl; //il n'aura le droit de prendre qu'un objet par pièce. Meme si son sac est vide au départ
    int choix_objet;
    cin >> choix_objet;
    if(choix_objet == 1){
      if (object1 == 0){
      Cle *obj1 = new Cle();
      sac->addToBag(obj1);
    }else if (object1 == 1){
      Potion *obj1 = new Potion;
      sac->addToBag(obj1);
    }

    }else if(choix_objet == 2){
        if (object2 == 0){
      Cle *obj2 = new Cle();
      sac->addToBag(obj2);
    }else if (object2 == 1){
      Potion *obj2 = new Potion;
      sac->addToBag(obj2);
    }
    }else{
        cout << "Cet objet n'est pas dans cette pièce. Désolé"<<endl;
    }
    cout<< "Il vous reste "<<sac->getRemainSpace()<<" places"<<endl;
  
}