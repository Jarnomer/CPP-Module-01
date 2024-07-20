#include "Zombie.hpp"

#include <iostream>

void Zombie::announce(void) {
  std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(string name) { this->name = name; }

Zombie::~Zombie(void) {
  std::cout << this->name << " has been deleted" << std::endl;
}
