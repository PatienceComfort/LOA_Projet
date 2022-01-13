
class Amazone : public Perso {
private:
  std::string nomArme;

public:
 Amazone();
 void coupDeLance(Perso adversaire);
  virtual  ~Amazone ();
};
