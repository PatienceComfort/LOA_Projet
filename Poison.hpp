#ifndef POISON
#define POISON
#include "Objet.h"

class Poison:public Objet {
private:
    int niveau;

public:
  Poison(int degat);
  
};

#endif
