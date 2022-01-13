#ifndef OBJET
#define OBJET

class Objet {
private:
  int nbUti;
  int niveau;
public:
  Objet();
  virtual ~Objet();
  int getUti();
  int getNiveau();
};

#endif
