#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack(void) {
  cout << name << " attacks with their " << weapon.getType() << endl;
}
