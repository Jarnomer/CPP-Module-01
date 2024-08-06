#include "Zombie.hpp"

void Zombie::announce(void) { cout << name << " BraiiiiiiinnnzzzZ..." << endl; }

Zombie::Zombie(string name) { this->name = name; }

Zombie::~Zombie(void) { cout << name << " has been destroyed" << endl; }
