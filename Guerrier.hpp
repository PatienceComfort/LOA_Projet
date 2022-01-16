class Guerrier: public Perso {
private:
  std::string nomArme;

public:
  Guerrier();
  void coupDepee(Perso * adversaire);
  void presentation_adv();
  virtual ~Guerrier ();
};
