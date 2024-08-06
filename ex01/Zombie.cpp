#include "Zombie.hpp"

void Zombie::announce(void) { cout << name << " BraiiiiiiinnnzzzZ..." << endl; }

void Zombie::set_name(string name) { this->name = name; }

Zombie::~Zombie(void) { cout << name << " has been destroyed" << endl; }
