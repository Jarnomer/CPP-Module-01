#include "Zombie.hpp"

int main(void) {
  static int n = 5;

  Zombie *horde = zombieHorde(n, "Zombie");
  for (int i = 0; i < n; i++) {
    horde[i].announce();
  }
  delete[] horde;
  return 0;
}
