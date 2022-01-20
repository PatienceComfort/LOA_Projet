#include <iostream>
using namespace std;
#include "Perso.h"
#include "Sorciere.h"
#include "Amazone.h"
#include "Moine.h"
#include "Guerrier.h"


//le personnage a été crée
//int alea_adv => entier aleatoire determinant au role de l'adversaire
//int j => entier associé au role du joueur
int duel(Perso * joueur, Perso * adversaire, int alea_adv, int j){
  //combat en 10 coups
  for(int i = 0; i < 10; i++){
    int s1= joueur->getSante();
    adversaire->lancerAttaque(joueur, alea_adv);
    int s2= joueur->getSante();
    if(joueur->getSante()<= 0){
      cout << "Quelle défaite cuisante!"<<endl;
      return 0;
    }else{
      char riposte;
      cout << "Que voulez vous faire : A = Attaque, B = Bouclier"<<endl;
      cin >> riposte;
      if (riposte == 'A'){
        //le joueur lance son attaque
        joueur->lancerAttaque(adversaire, j);
      }else if (riposte == 'B'){
        //le joueur utilise son bouclier
        joueur->leverBouclier(s1-s2);//recupere les points de santé perdu lors de l'attaque de l'adversaire
      }else{
        //attaque inconnue
        cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
      }
    }
  }
}

int resultatDuel(Perso * nom_perso, Perso * advers, Arme * arme, Bouclier * bouclier){
  int a = nom_perso->getSante();
  int b = advers->getSante();
  if (a >= b){
    nom_perso->augHabilite();
    nom_perso->augSante();
    arme->augNiveau();
    bouclier->augNiveau();
    cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité ainsi qu'en niveau d'arme et de bouclier"<<endl;
  }else{
    cout << "Mince vous avez perdu ce combat ! "<<endl;
  }
  if(nom_perso->getSante()<=0){
    cout<<"Vous êtes mort au combat.";
    return 0;
  }
  nom_perso->afficherStats();
}


void Sequence_combat(Perso * joueur, int alea_adv, Arme * arme, Bouclier * bouclier, int i){
  cout<<"Preparez vous a combattre !"<<endl; 
  if(alea_adv == 1){
    Moine *adversaire = new Moine;
    adversaire->presentation_adv();
    duel(joueur, adversaire, alea_adv, i);
    resultatDuel(joueur,adversaire , arme, bouclier);
    delete adversaire;
  }
  else if(alea_adv == 2){
    Sorciere *adversaire = new Sorciere;
    adversaire->presentation_adv();
    duel(joueur, adversaire, alea_adv, i);
    resultatDuel(joueur,adversaire , arme, bouclier);
    delete adversaire;
  }
  else if(alea_adv == 3){
    Guerrier *adversaire = new Guerrier;
    adversaire->presentation_adv();
    duel(joueur, adversaire,alea_adv, i);
    resultatDuel(joueur,adversaire , arme, bouclier);
    delete adversaire;
  }
  else if(alea_adv == 4){
    Amazone *adversaire = new Amazone;
    adversaire->presentation_adv();
    duel(joueur, adversaire,alea_adv, i);
    resultatDuel(joueur,adversaire , arme, bouclier);
    delete adversaire;
  }
}