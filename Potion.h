#ifndef POTION
#define POTION
#include "Objet.h"
class Potion: public Objet{
    protected:
    std::string name;
    public:
        Potion();
        std::string getName();

};
#endif