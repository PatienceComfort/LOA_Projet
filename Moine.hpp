class Moine:public Perso {
private:
  /* data */

public:
  Moine ();
  void coupDePoignard(Perso adversaire);//un coup de Poignard retire 10 points de vie à l'adversaire
  virtual ~Moine ();
};
