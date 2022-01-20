#ifndef SAC
#define SAC

#include <iostream>
#include <vector>
#include"Personnage.h"
#include "Objet.h"

class Sac{
    friend class Personnage;
    friend class Objet;
    
    protected:
   std::vector <Objet *> contenu;
    public:
    Sac();
    void addToBag(Objet * objAjoute);
    void removeFromBag(int index);
    int getBagCapacity();
    int getRemainSpace();
};

#endif
