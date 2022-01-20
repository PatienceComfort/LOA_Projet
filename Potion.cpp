#include "Potion.h"

Potion::Potion():Objet(),name("Potion"){

}
std::string Potion::getName(){
  return this->name;
}