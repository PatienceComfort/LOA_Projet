


class Perso {
private:
  /* data */
  string nom;
  int indSante;
  int indHab;
  vector <objet> sac;
public:
  Perso (arguments);
  virtual ~Perso ();
  void getName();
  void getSante();
  void getHab();
  void getObjets();
  void addObjet();//inclut une verification du nombre d'getObjets
  void dropObjet();
  void useObjet();
};
