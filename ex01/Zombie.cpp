#include "Zombie.hpp"

#include <iostream>

void Zombie::announce(void) {
  std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(string name) { this->name = name; }

Zombie::~Zombie(void) {
  std::cout << this->name << " has been destroyed" << std::endl;
}
