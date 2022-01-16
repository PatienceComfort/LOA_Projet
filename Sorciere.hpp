
class Sorciere:public Perso {
private:
  std::string nomArme;

public:
  Sorciere ();
  void attaqueMagique(Perso * adversaire);//la soricère lance une attaque magique qui retire 5 points de vie
  void presentation_adv();//utilise bouclier dans le sac 
  virtual ~Sorciere ();
};
