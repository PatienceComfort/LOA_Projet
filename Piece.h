#ifndef PIECE
#define PIECE
#include <vector>
#include <string>

class Piece {
private:
  int nb_portes;//une pièce a soit 3 portes, si elle est normale, soit 2 si c'est une pièce d'angle, soit 1 si c'est une piece de transition

public:
  Piece(int nbDePortes);
  int getNbDoors();
  //Piece(int nbDePortes, bool sortie);
  //Piece(int nbDePortes, bool combat, bool sortie);
  virtual ~Piece ();
};

#endif