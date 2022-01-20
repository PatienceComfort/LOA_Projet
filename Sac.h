#ifndef SAC
#define SAC
#include"Perso.h"
#include "Objet.h"
#include <iostream>
#include <vector>

class Sac{
    friend class Perso;
    friend class Objet;
    protected:
    static std::vector <Objet *> contenu;
    public:
    Sac();
    void addToBag(Objet * objAjoute);
    void removeFromBag(int index);
    int getBagCapacity();
    int getRemainSpace();
    Objet * getContenu(int index);
};

#endif