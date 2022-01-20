#ifndef CLE
#define CLE
#include"Objet.h"

class Cle: public Objet {
    protected:
    std::string name;
    public:
    Cle();
    std::string getName();
    
};
#endif