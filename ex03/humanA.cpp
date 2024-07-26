#include "HumanA.hpp"

void HumanA::attack(void) {
  cout << name << " attacks with their " << weapon.getType() << endl;
}

HumanA::HumanA(string name, class Weapon &weapon) { this->name = name; }
