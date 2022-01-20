#include <iostream>
#include <random>
#include <time.h>
using namespace std;
#include "Perso.h"
#include "Piece.h"
#include "Sorciere.h"
#include "Moine.h"
#include "Guerrier.h"
#include "Amazone.h"
#include "Arme.h"
#include "Bouclier.h"
#include "Potion.h"
#include "Cle.h"
#include "Sac.h"

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
    Sorciere *nom_perso = new Sorciere;
    Arme * arme = new Arme;
    Bouclier * bouclier = new Bouclier;
    Sac * sac = new Sac;
    sac->addToBag(arme);
    sac->addToBag(bouclier);
    //Message de bienvenue
    cout << "Entrez donc dans le chateau et essayez de sortir de l'autre coté si vous pouvez"<<endl;
    cout << "A l'intérieur vous attends un labyrinth interminable, des pièges et des adversaires"<<endl;
    cout << "Le chateau n'est pas méchant et vous offrira de quoi reussir votre quete. Mais à vous d'en faire bon usage"<<endl;
    cout << "Combattez vos adversaires, et utilisez vos potion. Mais surtout, choissisez la bonne porte."<<endl;
    //Creation de la première pièce
        //nb de portes
    const std::vector<int> option_portes{1, 2, 3};
    srand(time (NULL));
    int door = rand() % option_portes.size();
    int num_portes = option_portes[door];
        //presence adversaire

    bool adv = rand()%2;
    Piece *piece_active = new Piece(num_portes, adv);
      //Choix des objets à mettre dans la pièce
    const std::vector<int> option_objets{1, 2};
    //objet1
    int object1 = rand() % option_objets.size();
    //objet2
    int object2 = rand() % option_objets.size();
    const std::vector<string> objets_noms{"Cle", "Potion"};
    cout << "Dans cette pièce, il y a deux objets: "<<endl;
    cout << "- 1 " << objets_noms[object1]<<endl;
    cout << "- 2 " << objets_noms[object2]<<endl;
  

    
    //boucle if pour presentation d'un adversaire
    if(adv == true){
        //nombre aléatoire pour déterminer quel type d'adversaire
        cout << "Oh tiens nous avons un adversaire"<<endl;
        //l'adversaire se présente et lance le premier coup
        //const std::vector<int> option_adv{1, 2, 3};
        int indAdv = rand()%3+1;
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
              int s1= nom_perso->getSante();
              advers->coupDePoignard(nom_perso);
              int s2= nom_perso->getSante();
              if(nom_perso->getSante()<= 0){
                cout << "Quelle défaite cuisante!"<<endl;
                return 0;
              }else {
                char action;
                cout << "Que voulez vous faire : A = Attaque, B = Bouclier"<<endl;
                cin >> action;
                if (action == 'A'){
                  //le joueur lance son attaque
                  nom_perso->attaqueMagique(advers);
                }else if (action == 'B'){
                  //le joueur utilise son bouclier
                  nom_perso->leverBouclier(s1-s2);//necessite la fonction leverBouclier dans perso
                }else{
                  //attaque inconnue
                  cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
                }
              }
            }
            int a = nom_perso->getSante();
            int b = advers->getSante();
            if (a >= b){
              nom_perso->augHabilite();
              nom_perso->augSante();
              arme->augNiveau();
              bouclier->augNiveau();
              cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité ainsi qu'en niveau d'arme et de bouclier"<<endl;
            }
            else{
              cout << "Mince vous avez perdu ce combat ! "<<endl;
            }
        
            
        }else if (indAdv == 2){
            //l'adversaire est guerrier
            Guerrier *advers = new Guerrier; 
            //le guerrier dit un truc méchant
            advers->presentation_adv();
              for(int i = 0; i < 10; i++){
              int s1= nom_perso->getSante();
              advers->coupDepee(nom_perso);
              int s2= nom_perso->getSante();
              if(nom_perso->getSante()<= 0){
                cout << "Quelle défaite cuisante!"<<endl;
                return 0;
              }else {
                char action;
                cout << "Que voulez vous faire : A = Attaque, B = Bouclier"<<endl;
                cin >> action;
                if (action == 'A'){
                  //le joueur lance son attaque
                  nom_perso->attaqueMagique(advers);
                }else if (action == 'B'){
                  //le joueur utilise son bouclier
                  nom_perso->leverBouclier(s1-s2);//necessite la fonction leverBouclier dans perso
                }else{
                  //attaque inconnue
                  cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
                }
              }
            }
            int a = nom_perso->getSante();
            int b = advers->getSante();
            if (a >= b){
              nom_perso->augHabilite();
              nom_perso->augSante();
              arme->augNiveau();
              bouclier->augNiveau();
              cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité  ainsi qu'en niveau d'arme et de bouclier"<<endl;
            }
            else{
              cout << "Mince vous avez perdu ce combat ! "<< endl;
            }
        
           
        }else{
            //l'adversaire est une amazone
            Amazone *advers = new Amazone;
            //l'amazone dit qu'elle va l'éventrer
            advers->presentation_adv();
            
            
            for(int i = 0; i < 10; i++){
              int s1= nom_perso->getSante();
              advers->coupDeLance(nom_perso);
              int s2= nom_perso->getSante();
              if(nom_perso->getSante()<= 0){
                cout << "Quelle défaite cuisante!"<<endl;
                return 0;
              }else {
                char action;
                cout << "Que voulez vous faire : A = Attaque, B = Bouclier"<<endl;
                cin >> action;
                if (action == 'A'){
                  //le joueur lance son attaque
                  nom_perso->attaqueMagique(advers);
                }else if (action == 'B'){
                  //le joueur utilise son bouclier
                  nom_perso->leverBouclier(s1-s2);//necessite la fonction leverBouclier dans perso
                }else{
                  //attaque inconnue
                  cout << "C'est quoi cette attaque? Elle est nouvelle? En tout cas elle ne fait rien. HAHA!"<<endl;
                }
              }
            }
          
            int a = nom_perso->getSante();
            int b = advers->getSante();
            if (a >= b){
              nom_perso->augHabilite();
              nom_perso->augSante();
              arme->augNiveau();
              bouclier->augNiveau();
              cout << "Feliciatations! Votre victoire a été totale! Et vous augmentez en habilité"<<endl;
            }
            else{
              cout << "Mince vous avez perdu ce combat ! "<< endl;
            }
        }
        // rappel de la santé du joueur
        cout << "Quelle rude combat ! Faites attention à votre santé, elle est de : "<< nom_perso->getSante()<<endl;
        cout << "Habilité = "<< nom_perso->getHab() <<
         ", niveau Arme = "<< arme->getNiveau() <<
         ", niveau Bouclier = " << bouclier->getNiveau()<<endl;
        
    }
  
    if(sac->getBagCapacity()<3){
      cout << "Vous n'avez rien dans votre sac sauf votre arme et votre bouclier"<<endl;
    }/*else{
      cout << "Voici les objets de votre sac : " << sac->getNameObj(2)<<endl;
      //sac->getContenu();
      cout << "Quel objet voulez-vous utilisé ?"<< endl;
      int useObj;
      cin >> useObj;
      if(useObj==1){
        if(sac->getNameObj(2)=="Cle"){
          nom_perso->useKey();
        }
        else{
          nom_perso->usePotion();
        }
        sac->removeFromBag(2);
      }
      else{
        if(sac->getNameObj(3)=="Cle"){
          nom_perso->useKey();
        }
        else{
          nom_perso->usePotion();
        }
        sac->removeFromBag(3);
      
      
    }*/

    cout << "Dans votre sac, vous avez de la place pour "<<sac->getRemainSpace()<<" objets"<< endl;
    cout <<"Quel objet voulez-vous prendre?"<<endl; //il n'aura le droit de prendre qu'un objet par pièce. Meme si son sac est vide au départ
    int choix_objet;
    cin >> choix_objet;
    if(choix_objet == 1){
      if (object1 == 0){
      Cle *obj1 = new Cle();
      sac->addToBag(obj1);
      obj1->getName();
      cout<<" "<<endl;
    }else if (object1 == 1){
      Potion *obj1 = new Potion;
      sac->addToBag(obj1);
      obj1->getName();
      cout<<" "<<endl;
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
  
//
    if(sac->getBagCapacity()<3){
      cout << "Vous n'avez rien dans votre sac sauf votre arme et votre bouclier"<<endl;
    }else{
      //nom_perso->getBagObj();
      cout<<"Vous avez dans votre sac: TROUVER SOL " <<endl;
      sac->getNameObj(2);
      cout<<"Marche"<<endl;
      //sac->getContenu();
      cout << "Voulez-vous déposer un objet dans la pièce ? (1: Oui, 0: Non)"<< endl;
      int depot;
      cin >> depot;
      if(depot==1){
        cout << "Quel objet voulez-vous déposer?"<< endl; 
        int aRetirer;
        cin >> aRetirer;
        if(aRetirer==1){
          sac->removeFromBag(2);
      }
        else{
          sac->removeFromBag(3);
        }
      }
    }

    cout<< "Il vous reste "<<sac->getRemainSpace()<<" places XXXX"<<endl;

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