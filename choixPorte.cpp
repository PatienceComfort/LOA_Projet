#include <iostream>
using namespace std;
#include "Piece.h"
#include "Perso.h"

int sortieDePiece(Perso * joueur){
    if(joueur->getChance()>= 50){
        cout<<"Felicitation!! Vous avez trouvé la sortie du chateau!!"<<endl;
        return 0;
    }
}

void choixPorte(Piece * pieceActive, Perso * joueur){
    int doorChoice;
    int nbP = pieceActive->getNbDoors();
    std::cout << "Pour sortir de cette pièce, vous avez "<<nbP<< " portes."<< std::endl;
    if(nbP == 1){
        cout<<" Choisissez 1"<<endl;
    }else if (nbP == 2){
        cout << "2 Portes"<<endl;
        cout << "Laquelle voulez-vous choisir?"<<endl;
        cout <<"1 ou 2"<<endl;
    }else if(nbP == 3){
        cout << "3 Portes"<<endl;
        cout << "Laquelle voulez-vous choisir?"<<endl;
        cout <<"1, 2 ou 3"<<endl;
    }
    
    cin >> doorChoice;
    joueur->augChance();
    sortieDePiece(joueur);
    delete pieceActive;
}

