#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Weapon {
private:
  string type;

public:
  Weapon(string type);
  void setType(string type);
  const string &getType(void);
};
#endif
