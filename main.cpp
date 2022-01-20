#include <iostream>
using namespace std;
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Perso.h"
#include "Sorciere.h"
#include "Amazone.h"
#include "Moine.h"
#include "Guerrier.h"
#include "Objet.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Sac.h"
#include "Piece.h"
#include "combat.cpp"
#include "prendreObj.cpp"
#include "utiliserObj.cpp"
#include "deposerObj.cpp"
#include "choixPorte.cpp"


int main() {

//Récupérer le nom du joueur
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

//Récupérer le role souhaité
char role;
cin >> role;


cout << "Vous devez sortir en moins de 10 tours en trouvant assez de clés. Bonne chance !"<<endl;
cout <<endl;
srand(time(NULL));
if(role == 'S'){
  int i = 2;
  //creer le joueur
  Sorciere *nom_perso = new Sorciere;
  //creer son arme
  Arme *arme = new Arme;
  //creer son Bouclier
  Bouclier *bouclier = new Bouclier;
  //creer son sac
  Sac *sacJoueur = new Sac;
  //ajouter l'arme et le bouclier dans le sac
  sacJoueur->addToBag(arme);
  sacJoueur->addToBag(bouclier);
  //boucle des combats
  for (int k = 0; k<10;k++){
      if(nom_perso->getSante()<= 0){
          cout << "Requiem. Vous êtes mort." <<endl;
          return 0;
      }
    cout << "Vous entrez dans une nouvelle pièce. Attention un adversaire se cache dans les ténèbres !"<<endl;
    //lancer l'aleatoire de l'adversaire adv
    int adv = rand() % 4 +1;
    //lancement séquence combat
    Sequence_combat(nom_perso,adv,arme,bouclier,i);
    //objet1 de la piece
    int object1 = rand() % 2;
    //objet2 de la piece
    int object2 = rand() % 2;
    const std::vector<string> objets_noms{"Cle", "Potion"};
    cout << "Dans cette pièce, il y a deux objets: "<<endl;
    cout << "- 1: " << objets_noms[object1]<<endl;
    cout << "- 2: " << objets_noms[object2]<<endl;
    //choisir objet dans la piece
    choixObjet(sacJoueur, object1, object2);
    //utiliser objet dans son sac
    utilObj(sacJoueur, nom_perso);
    //deposer objet dans la piece
    depotObjet(sacJoueur);
    //nombre aleatoire de portes de la piece
    int door = rand() % 3 + 1;
    Piece * piece_active = new Piece(door);
    choixPorte(piece_active, nom_perso);
  }   
}else if(role == 'G'){
  int i = 3;
  Guerrier * nom_perso = new Guerrier;
  Arme *arme = new Arme;
  Bouclier *bouclier = new Bouclier;
  Sac *sacJoueur = new Sac;
  sacJoueur->addToBag(arme);
  sacJoueur->addToBag(bouclier);
  for (int k = 0; k<10;k++){
      if(nom_perso->getSante()<= 0){
          cout << "Requiem. Vous êtes mort." <<endl;
          return 0;
      }
    cout << "Vous entrez dans une nouvelle pièce. Attention un adversaire se cache dans les ténèbres"<<endl;
    int adv = rand() % 4 + 1;
    Sequence_combat(nom_perso,adv,arme,bouclier,i);
    int object1 = rand() % 2;
    int object2 = rand() % 2;
    const std::vector<string> objets_noms{"Cle", "Potion"};
    cout << "Dans cette pièce, il y a deux objets: "<<endl;
    cout << "- 1: " << objets_noms[object1]<<endl;
    cout << "- 2: " << objets_noms[object2]<<endl;
    choixObjet(sacJoueur, object1, object2);
    utilObj(sacJoueur, nom_perso);
    depotObjet(sacJoueur);
    int door = rand() % 3 + 1;
    Piece * piece_active = new Piece(door);
    choixPorte(piece_active, nom_perso);
  }
}else if(role == 'M'){
  int i = 1;
  Moine *nom_perso = new Moine;
  Arme *arme = new Arme;
  Bouclier *bouclier = new Bouclier;
  Sac *sacJoueur = new Sac;
  sacJoueur->addToBag(arme);
  sacJoueur->addToBag(bouclier);
  for (int k = 0; k<10;k++){
      if(nom_perso->getSante()<= 0){
          cout << "Requiem" <<endl;
          return 0;
      }
    cout << "Vous entrez dans une nouvelle pièce. Attention un adversaire se cache dans les ténèbres"<<endl;
    int adv = rand() % 4 + 1;
    Sequence_combat(nom_perso,adv,arme,bouclier,i);
    int object1 = rand() % 2;
    int object2 = rand() % 2;
    const std::vector<string> objets_noms{"Cle", "Potion"};
    cout << "Dans cette pièce, il y a deux objets: "<<endl;
    cout << "- 1: " << objets_noms[object1]<<endl;
    cout << "- 2: " << objets_noms[object2]<<endl;
    choixObjet(sacJoueur, object1, object2);
    utilObj(sacJoueur, nom_perso);
    depotObjet(sacJoueur);
    int door = rand() % 3 + 1;
    Piece * piece_active = new Piece(door);
    choixPorte(piece_active, nom_perso);
  }
}else if(role == 'A'){
  int i = 4;
  Amazone * nom_perso = new Amazone;
  Arme *arme = new Arme;
  Bouclier *bouclier = new Bouclier;
  Sac *sacJoueur = new Sac;
  sacJoueur->addToBag(arme);
  sacJoueur->addToBag(bouclier);
  for (int k = 0; k<10;k++){
      if(nom_perso->getSante()<= 0){
          cout << "Requiem" <<endl;
          return 0;
      }
    cout << "Vous entrez dans une nouvelle pièce. Attention un adversaire se cache dans les ténèbres"<<endl;
    int adv = (rand() % 4) + 1;
    Sequence_combat(nom_perso,adv,arme,bouclier,i);
    int object1 = rand() % 2;
    int object2 = rand() % 2;
    const std::vector<string> objets_noms{"Cle", "Potion"};
    cout << "Dans cette pièce, il y a deux objets: "<<endl;
    cout << "- 1: " << objets_noms[object1]<<endl;
    cout << "- 2: " << objets_noms[object2]<<endl;
    choixObjet(sacJoueur, object1, object2);
    utilObj(sacJoueur, nom_perso);
    depotObjet(sacJoueur);
    int door = rand() % 3 + 1;
    Piece * piece_active = new Piece(door);
    choixPorte(piece_active, nom_perso);
  }
}
else{
  cout << "Nous ne connaissons pas ce role ici"<<endl;
}

  return 0;
}