class Moine:public Perso {
private:
  std::string nomArme;

public:
  Moine ();
  void coupDePoignard(Perso * adversaire);//un coup de Poignard retire 10 points de vie à l'adversaire
  void presentation_adv();
  virtual ~Moine ();
};
