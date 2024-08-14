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
  void set_log_level(string level);

  int logLevel;

public:
  Harl(void);
  ~Harl(void);
  void filter(string level);
};
