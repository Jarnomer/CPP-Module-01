#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

using std::string;

class Zombie {
private:
  string name;

public:
  void announce(void);
  void set_name(string name);
  ~Zombie(void);
};

Zombie *zombieHorde(int N, string name);

#endif
