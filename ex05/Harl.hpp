#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Harl {
private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

public:
  void complain(string level);
};
