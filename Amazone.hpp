
class Amazone : public Perso {
private:
  std::string nomArme;

public:
 Amazone();
 void coupDeLance(Perso *adversaire);
 void presentation_adv();
  virtual  ~Amazone ();
};
