#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
  Weapon &weapon;
  string name;

public:
  void attack(void);
  HumanA(string name, class Weapon &weapon);
};

#endif
