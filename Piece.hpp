
#include <vector>
#include <string>

class Piece {
private:
  /* data */
  int nb_portes;//une pièce a soit 3 portes, si elle est normale, soit 1 ou 2 si c'est une pièce d'angle
  int nb_objets; // toujours au nombre de 3
  std::vector <std::string> objets;
  bool presence_adversaire;//si oui, on va aussi avoir besoin de construire un adversaire

public:
  Piece ();
  Piece(int nbDePortes);
  Piece(int nbDePortes, bool combat);
  virtual ~Piece ();
};
