#include "Zombie.hpp"

int main(void) {
  randomChump("randomChump1");
  randomChump("randomChump2");
  Zombie *z = newZombie("newZombie1");
  z->announce();
  delete z;
}
