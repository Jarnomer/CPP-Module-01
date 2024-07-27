#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
  Weapon *weapon;
  string name;

public:
  HumanB(string name);
  void attack(void);
  void setWeapon(Weapon &weapon);
};

#endif
