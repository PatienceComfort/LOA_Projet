#include <iostream>
using namespace std;
#include "Personnage.h"

//constructeur d'un personnage lambda
Personnage::Personnage(string name):nom(name), sante(100), hab(1), chance(0){
  cout<<"Un personnage a été crée"<<endl;
}

//recupérer le niveau de santé du personnage
int Personnage::getSante(){
  return this->sante;
}

//récupérer le niveau d'habilté du personnage
int Personnage::getHab(){
  return this->hab;
}
//lever le bouclier revient à récupérer une quantité "protection" de vie après une attaque
//récupérer l'indice "chances de trouver la porte de sortie du personnage"
int Personnage::getChance(){
  return this->chance;
}
//lancer une attaque sur con adversaire. L'adversaire perdera une quantité "loss" de santé
void Personnage::lancerAttaque(Personnage * adversaire, int loss){
  adversaire->recoitAttaque(loss);
}
//recevoir une attaque d'un adversaire. le personnage perdera une quantité 'perte' de santé
void Personnage::recoitAttaque(int perte){
  this->sante -= perte;

void Personnage::leverBouclier(int protection){
  this->sante += protection;
}
//phrase de présentation générique d'un adversaire
void Personnage::presentAdv(){
  cout << "Argh! Je suis un mechant adversaire"<<endl;
}
//récupérer le niveau d'habilité d'un personnage
void Personnage::augHab(){
  this->hab++;
}
//récupérer le niveau de santé d'un personnage
void Personnage::augSante(int augmentation){
  this->sante += augmentation;
}
/*Permet d'aumenter les chances de trouver une porte de sortie
est incrémenté de 1 apres chaque trouver
est incrémenté de 5 après utilisation d'une clé de téléportation*/
void Personnage::augChance(int teleport){
  this->chance += teleport;
}
//influence le niveau de santé du joueur aléatoirement (poison ou medicament)
void Personnage::utiliserPotion(bool typeDePotion){
  if(typedePotion = 1){
    this->sante += 10;
  }else if(typeDePotion = 0){
    this->sante -= 10;
  }
}
//augmente les chances de trouver une porte de sortie
void Personnage::utiliserCle(){
  this->augChance(5);
  cout<<"En passant la porte de cette pièce, vous serez téléporté de 5 pièces plus loin"<<endl;
}
