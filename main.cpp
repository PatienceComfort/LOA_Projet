#include <iostream>
using namespace std;
#include "time.h"
#include "Personnage.h"
#include "Sorciere.h"
#include "Amazone.h"
#include "Moine.h"
#include "Guerrier.h"
#include "Objet.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Sac.h"
#include "combat.cpp"
#include "utilObj.cpp"



int main() {
  srand(time (NULL));
  /* Récupérer le nom du joueur */
string name;
std::cout << "Votre nom? " << name << endl;
cin >> name;
cout << "Bonjour "<<name <<endl;
cout << "Quel role voulez-vous dans ce chateau?"<<endl;
cout << "Dans ce chateau, nous avons:"<<endl;
cout << "Des S pour Sorcières:"<<endl;
cout << "Des G pour Guerriers:"<<endl;
cout << "Des M pour Moines:"<<endl;
cout << "Des A pour Amazones:"<<endl;

/*Récupérer le role souhaité*/
char role;
cin >> role;

if(role == 'S'){
  //creer le joueur
  Sorciere *nom_perso = new Sorciere;
  //creer son
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //lancer l'aleatoire de l'adversaire adv
  int tours;
  cout << "Vous devez sortir en moins de 10 tours"<<endl;
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv);
  //utiliser objet dans son sac

}else if(role == 'G'){
  //creer le joueur
  Guerrier nom_perso = new Guerrier;
  //creer son arme
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //lancer l'aleatoire de l'adversaire adv
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv);
  //utiliser objet dans son sac
}else if(role == 'M'){
  //creer le joueur
  Moine nom_perso = new Moine;
  //creer son arme
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //lancer l'aleatoire de l'adversaire adv
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv);
  //utiliser objet dans son sac
}else if(role == 'A'){
  //creer le joueur
  Amazone nom_perso = new Amazone;
  //creer son arme
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //lancer l'aleatoire de l'adversaire adv
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv);
  //utiliser objet dans son sac
}else{
  cout << "Nous ne connaissons pas ce role ici"<<end;
}
  return 0;
}
