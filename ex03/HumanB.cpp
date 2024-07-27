#include "HumanB.hpp"

HumanB::HumanB(string name) : name(name), weapon(nullptr) {}

void HumanB::attack(void) {
  if (weapon) {
    cout << name << " attacks with their " << weapon->getType() << endl;
  } else {
    cout << name << " attacks with their kung-fu" << endl;
  }
}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }
