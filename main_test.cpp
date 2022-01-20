#include <iostream>
using namespace std;
#include "time.h"
#include "Perso.h"
#include "Sorciere.h"
#include "Amazone.h"
#include "Moine.h"
#include "Guerrier.h"
#include "Objet.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Sac.h"
#include "combat.cpp"
#include "utiliserObj.cpp"
#include "prendreObj.cpp"
#include "deposerObj.cpp"


int main() {
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



//objet1
int object1 = rand() % 2;
//objet2
int object2 = rand() % 2;
const std::vector<string> objets_noms{"Cle", "Potion"};
cout << "Dans cette pièce, il y a deux objets: "<<endl;
cout << "- 1 " << objets_noms[object1]<<endl;
cout << "- 2 " << objets_noms[object2]<<endl;

if(role == 'S'){
  int i = 2;
  //creer le joueur
  Sorciere *nom_perso = new Sorciere;
  //creer son
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  sacJoueur->addToBag(arme);
  sacJoueur->addToBag(bouclier);
  //lancer l'aleatoire de l'adversaire adv
  int tours;
  cout << "Vous devez sortir en moins de 10 tours"<<endl;
  srand(time (NULL));
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv,arme,bouclier,i);
  cout << "Dans cette pièce, il y a deux objets: "<<endl;
  cout << "- 1 " << objets_noms[object1]<<endl;
  cout << "- 2 " << objets_noms[object2]<<endl;
  choixObjet(sacJoueur, object1, object2);
  //utiliser objet dans son sac
  utilObj(sacJoueur, nom_perso);
  depotObjet(sacJoueur);

}else if(role == 'G'){
  int i =3;
  //creer le joueur
  Guerrier * nom_perso = new Guerrier;
  //creer son arme
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //lancer l'aleatoire de l'adversaire adv
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv,arme,bouclier,i);
  cout << "Dans cette pièce, il y a deux objets: "<<endl;
  cout << "- 1 " << objets_noms[object1]<<endl;
  cout << "- 2 " << objets_noms[object2]<<endl;
  choixObjet(sacJoueur, object1, object2);
  //utiliser objet dans son sac
  utilObj(sacJoueur, nom_perso);

}else if(role == 'M'){
  int i = 1;
  //creer le joueur
  Moine *nom_perso = new Moine;
  //creer son arme
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //lancer l'aleatoire de l'adversaire adv
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv,arme,bouclier,i);
  cout << "Dans cette pièce, il y a deux objets: "<<endl;
  cout << "- 1 " << objets_noms[object1]<<endl;
  cout << "- 2 " << objets_noms[object2]<<endl;
  choixObjet(sacJoueur, object1, object2);
  //utiliser objet dans son sac
  utilObj(sacJoueur, nom_perso);

}else if(role == 'A'){
  int i = 4;
  //creer le joueur
  Amazone * nom_perso = new Amazone;
  //creer son arme
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //lancer l'aleatoire de l'adversaire adv
  int adv = (rand() % 4) + 1;
  //lancement séquence combat
  Sequence_combat(nom_perso,adv,arme,bouclier,i);
  cout << "Dans cette pièce, il y a deux objets: "<<endl;
  cout << "- 1 " << objets_noms[object1]<<endl;
  cout << "- 2 " << objets_noms[object2]<<endl;
  choixObjet(sacJoueur, object1, object2);
  //utiliser objet dans son sac
  utilObj(sacJoueur, nom_perso);

}else{
  cout << "Nous ne connaissons pas ce role ici"<<endl;
}

  return 0;
}