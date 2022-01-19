#include"Perso.h"
#include "Objet.h"

class Sac{
    friend class Perso;
    protected:
   std::vector <Objet *> contenu;
    public:
    Sac();
    void addToBag(Objet * objAjoute);
    void removeFromBag(int index);
    int getBagCapacity();
    
    int getRemainSpace();
};