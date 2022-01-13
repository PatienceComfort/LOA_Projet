#include <iostream>
using namespace std;
#include "Perso.h"
#include "Sorciere.hpp"
#include "Moine.hpp"
#include "Guerrier.hpp"
#include "Amazone.hpp"
#include "Piece.hpp"



int main() {
  //Recupérer le nom du personnage
  string name;
  cout << "Votre nom? " << name << endl;
  cin >> name;
  cout << "Bonjour "<<name <<endl;
  cout << "Quel role voulez-vous dans ce chateau?"<<endl;
  cout << "Dans ce chateau, nous avons:"<<endl;
  cout << "Des S pour Sorcières:"<<endl;
  cout << "Des G pour Guerriers:"<<endl;
  cout << "Des M pour Moines:"<<endl;
  cout << "Des A pour Amazones:"<<endl;

  //Recupérer le rôle du personnage
  //Au lieu d'un switch, je vais utiliser if else parce que le switch pose problème avec la construction de personnage
  //Quoique, c'est peut-être juste mon souci de compilateur
  char role;
  cin >> role;

  if (role == 'S'){
    cout<<"Ah! une nouvelle sorcière"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Sorcière
    Sorciere nom_personage;
  }else if(role=='G'){
    cout<<"Ah! un nouveau guerrier"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Guerrier
    Guerrier nom_personage;
  }else if(role == 'M'){
    cout<<"Ah! un nouveau Moine"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Moine
    Moine nom_personage;
  }else if(role == 'A'){
    cout<<"Ah! une nouvelle Amazone"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Amazone
    Amazone nom_personage;
  }else{
    cout <<"Nous ne connaissons pas ce rôle. Pas dans ce chateau. Allez vous en et revenez quand vous savez ce que vous voulez"<<endl;
    return 0;
  }

  //Message de bienvenue
 cout << "Entrez donc dans le chateau et essayez de sortir de l'autre coté si vous pouvez"<<endl;
 cout << "A l'intérieur vous attends un labyrinth interminable, des pièges et des adversaires"<<endl;
 cout << "Le chateau n'est pas méchant et vous offrira de quoi reussir votre quete. Mais à vous d'en faire bon usage"<<endl;
 cout << "Combattez vos adversaires, et utilisez vos potion. Mais surtout, choissisez la bonne porte"<<endl;

 //Creation de la pièce
 //probleme potentiel: out of scope du vecteur
  const std::vector<int> option_portes{1, 2, 3};
  int door = rand() % option_portes.size();
  int num_portes = option_portes[door];
  Piece piece_active(num_portes); //donc on crée une pièce avec 1, 2 ou trois portes.

  //Choix des objets à mettre dans la pièce
  const std::vector<int> option_objets{1, 2, 3, 4};
  //objet1
  int object1 = rand() % option_objets.size();
  //objet2
  int object2 = rand() % option_objets.size();
  //objet3
  int object3 = rand() % option_objets.size();
  const std::vector<string> objets_noms{"Arme", "Bouclier", "Potion", "Potion"};
  cout << "Dans cette pièce, il y a trois objets: "<<endl;
  cout << "- 1" << objets_noms[object1]<<endl;
  cout << "- 1" << objets_noms[object2]<<endl;
  cout << "- 1" << objets_noms[object3]<<endl;
  //a ajouter dans le fichier PERSO
  /*
  - get remaining size of bag (int)
  - get weapon type (string)
  */
  cout << "Dans votre sac, vous avez de la place pour" << endl;
  //Puis message avec commandes

/*

   3 objets aléatoires sont crées

   Le nom de ces objets sont ajoutés dans le vecteur d'objets de la Piece
   un nombre aléatoire est choisit, si personnage créé on change le bool de presence_adversaire à construire
   */

  return 0;
}
