#include <iostream>
using namespace std;
#include "Personnage.h"
#include "Sorciere.h"
#include "Amazone.h"
#include "Moine.h"
#include "Guerrier.h"

//le personnage a été crée
//l'aléa adversaire a été déterminé
void duel(){
  for(int i = 0; i < 10; i++){
            int s1= joueur->getSante();
            adversaire->lancerAttaque(nom_perso);
            int s2= adversaire->getSante();
            if(joueur->getSante()<= 0){
              cout << "Quelle défaite cuisante!"<<endl;
              return 0;
            }else {
              char riposte;
              cout << "Que voulez vous faire : A = Attaque, B = Bouclier"<<endl;
              cin >> riposte;
              if (riposte == 'A'){
                //le joueur lance son attaque
                joueur->lancerAttaque(advers);
              }else if (riposte == 'B'){
                //le joueur utilise son bouclier
                joueur->leverBouclier(s1-s2);//necessite la fonction leverBouclier dans perso
              }else{
                //attaque inconnue
                cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
              }
            }
          }
}

void resultatDuel(){
  int a = nom_perso->getSante();
  int b = advers->getSante();
  if (a >= b){
    joueur->augHabilite();
    joueur->augSante();
    arme->augNiveau();
    bouclier->augNiveau();
    cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité ainsi qu'en niveau d'arme et de bouclier"<<endl;
    }else{
      cout << "Mince vous avez perdu ce combat ! "<<endl;
    }

}


void Sequence_combat(Personnage * joueur, int alea_adv){
  if(alea_adv = 1){
    Moine *adversaire = new Moine;
    adversaire->presentAdv();
    adversaire->lancerAttaque();
    duel();
    resultatDuel();
    }
  }else if(alea_adv = 2){
    Sorciere *adversaire = new Sorciere;
    adversaire->presentAdv();
    adversaire->lancerAttaque()
    duel();
    resultatDuel();
  }else if(alea_adv = 3){
    Guerrier *adversaire = new Guerrier;
    adversaire->presentAdv();
    adversaire->lancerAttaque()
    duel();
    resultatDuel();
  }else if(alea_adv = 4){
    Amazone *adversaire = new Amazone;
    adversaire->presentAdv();
    adversaire->lancerAttaque()
    duel();
    resultatDuel();
  }
}
