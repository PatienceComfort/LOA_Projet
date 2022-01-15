#include "Piece.hpp"


Piece::Piece():nb_objets(3),presence_adversaire(false){
  
}
Piece::Piece(int nbDePortes):nb_objets(3),presence_adversaire(false), nb_portes(nbDePortes){

}
Piece::Piece(int nbDePortes, bool combat):nb_objets(3),presence_adversaire(combat),nb_portes(nbDePortes){
    
}