#include <iostream>
#include <random>
using namespace std;
#include "Perso.h"
#include "Piece.h"
#include "Sorciere.h"
#include "Moine.h"
#include "Guerrier.h"
#include "Amazone.h"

int main(){
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

    //Récupérer le role du personnage 
  char role;
  cin >> role;
    if (role == 'S'){
    cout<<"Ah! une nouvelle sorcière"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Sorcière
    Perso *nom_perso = new Sorciere;
    //Message de bienvenue
    cout << "Entrez donc dans le chateau et essayez de sortir de l'autre coté si vous pouvez"<<endl;
    cout << "A l'intérieur vous attends un labyrinth interminable, des pièges et des adversaires"<<endl;
    cout << "Le chateau n'est pas méchant et vous offrira de quoi reussir votre quete. Mais à vous d'en faire bon usage"<<endl;
    cout << "Combattez vos adversaires, et utilisez vos potion. Mais surtout, choissisez la bonne porte"<<endl;
    //Creation de la première pièce
        //nb de portes
    const std::vector<int> option_portes{1, 2, 3};
    int door = rand() % option_portes.size();
    int num_portes = option_portes[door];
        //presence adversaire
    bool adv = rand()%2;
    Piece *piece_active = new Piece(num_portes, adv);
      //Choix des objets à mettre dans la pièce
    const std::vector<int> option_objets{1, 2, 3, 4};
    //objet1
    int object1 = rand() % option_objets.size();
    //objet2
    int object2 = rand() % option_objets.size();
    //objet3
    int object3 = rand() % option_objets.size();
    //Presentation des objets dans la pièce
    const std::vector<string> objets_noms{"Arme", "Bouclier", "Potion", "Potion"};
    cout << "Dans cette pièce, il y a trois objets: "<<endl;
    cout << "- 1 " << objets_noms[object1]<<endl;
    cout << "- 2 " << objets_noms[object2]<<endl;
    cout << "- 3 " << objets_noms[object3]<<endl;
    
    //boucle if pour presentation d'un adversaire
    if(adv == true){
        //nombre aléatoire pour déterminer quel type d'adversaire
        cout << "Oh tiens nous avons un adversaire"<<endl;
        //l'adversaire se présente et lance le premier coup
        const std::vector<int> option_adv{1, 2, 3};
        int indAdv = rand() % option_adv.size();
        //faire ça 5 fois
        if(indAdv == 1){
            //l'adversaire est un moine
            Moine *advers = new Moine;
            //Le moine dit sa petite phrase de moquerie
            advers->presentation_adv();

            //Boucle for (*10) qui verifie le niveau de vie du joueur. On part du principe que chaque combat dure 10 
            /*
            - si ce niveau est > 100
            - demande l'action du joueur 
            - l'implémente
            - implémente une attaque de l'adversaire
            - si le niveau est <=0
            - On annonce la défaite du joueur
            - A la fin du combat, on compare la santé du joueur et de l'adversaire et celui qui en a le plus a gagné 
            - Si le joueur en a plus, il gagne un point d'habilité 
            */
            for(int i = 0; i < 10; i++){
              advers->coupDePoignard(nom_perso);
              if(nom_perso->getSante()<= 0){
                cout << "Quelle défaite cuisante!"<<endl;
                return 0;
              }else {
                char action;
                cin >> action;
                if (action == 'A'){
                  //le joueur lance son attaque
                  nom_perso->attaqueMagique(*advers);
                }else if (action == 'B'){
                  //le joueur utilise son bouclier
                  nom_perso->leverBouclier();//necessite la fonction leverBouclier dans perso
                }else{
                  //attaque inconnue
                  cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
                }
              }
            }
            int a = nom_perso->getSante();
            int b = advers->getSante();
            if (a > b){
              nom_perso.hab += 1;
              cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité"<<endl;
            }
        
            
        }else if (indAdv == 2){
            //l'adversaire est guerrier
            Guerrier *advers = new Guerrier; 
            //le guerrier dit un truc méchant
            advers->presentation_adv();
              for(int i = 0; i < 10; i++){
              advers->coupDepee(nom_perso);
              if(nom_perso->getSante()<= 0){
                cout << "Quelle défaite cuisante!"<<endl;
                return 0;
              }else {
                char action;
                cin >> action;
                if (action == 'A'){
                  //le joueur lance son attaque
                  nom_perso->attaqueMagique(*advers);
                }else if (action == 'B'){
                  //le joueur utilise son bouclier
                  nom_perso->leverBouclier();//necessite la fonction leverBouclier dans perso
                }else{
                  //attaque inconnue
                  cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
                }
              }
            }
            int a = nom_perso->getSante();
            int b = advers->getSante();
            if (a > b){
              nom_perso.hab += 1;
              cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité"<<endl;
            }
        
           
        }else{
            //l'adversaire est une amazone
            Amazone *advers = new Amazone;
            //l'amazone dit qu'elle va l'éventrer
            advers->presentation_adv();
            
            for(int i = 0; i < 10; i++){
              advers->coupDeLance(nom_perso);
              if(nom_perso->getSante()<= 0){
                cout << "Quelle défaite cuisante!"<<endl;
                return 0;
              }else {
                char action;
                cin >> action;
                if (action == 'A'){
                  //le joueur lance son attaque
                  nom_perso->attaqueMagique(*advers);
                }else if (action == 'B'){
                  //le joueur utilise son bouclier
                  nom_perso->leverBouclier();//necessite la fonction leverBouclier dans perso
                }else{
                  //attaque inconnue
                  cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
                }
              }
            }
            int a = nom_perso->getSante();
            int b = advers->getSante();
            if (a > b){
              nom_perso.hab += 1;
              cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité"<<endl;
            }
        }
        
    }
    cout << "Dans votre sac, vous avez de la place pour "<<nom_perso->getRemainSpace()<<" objets"<< endl;
    cout <<"Quel objet voulez-vous prendre?"<<endl; //il n'aura le droit de prendre qu'un objet par pièce. Meme si son sac est vide au départ
    int choix_objet;
    cin >> choix_objet;
    if(choix_objet == 1){
        //créer l'objet en question
        //faire la fonction addToBag
    }else if(choix_objet == 2){
        //créer l'objet en question
        //faire la fonction addToBag
    }else if (choix_objet == 3){
        //créer l'objet en question
        //faire la fonction addToBag
    }else{
        cout << "Cet objet n'est pas dans cette pièce. Désolé"<<endl;
    }

  }else if(role=='G'){
    cout<<"Ah! un nouveau guerrier"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Guerrier
    
  }else if(role == 'M'){
    cout<<"Ah! un nouveau Moine"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Moine
    
  }else if(role == 'A'){
    cout<<"Ah! une nouvelle Amazone"<<endl;
    cout<<"Eh bien entrez donc."<<endl;
    //Faire constructeur Amazone
    
  }else{
    cout <<"Nous ne connaissons pas ce rôle. Pas dans ce chateau. Allez vous en et revenez quand vous savez ce que vous voulez"<<endl;
    return 0;
  }

    //Création du personnage approprié
    /*Mon problème vient de la construction d'une personnage. Donc je vais repartir là dessus dès que je rentre*/

    return 0;
}
