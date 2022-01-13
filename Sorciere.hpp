
class Sorciere:public Perso {
private:
  /* data */

public:
  Sorciere ();
  void attaqueMagique(Perso adversaire);//la soricère lance une attaque magique qui retire 5 points de vie
  void protego();//utilise bouclier dans le sac 
  virtual ~Sorciere ();
};
