#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Sed {
private:
  const string file;
  const string s1;
  const string s2;
  std::ifstream infile;
  std::ofstream outfile;

public:
  Sed(string file, string s1, string s2);
  ~Sed(void);
  void replace(void);
};
