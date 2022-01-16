class Guerrier: public Perso {
private:
  std::string nomArme;

public:
  Guerrier();
  void coupDepee(Perso * adversaire);
  virtual ~Guerrier ();
};
