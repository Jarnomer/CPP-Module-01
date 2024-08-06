#include <iostream>

using std::string;
using std::cout;
using std::endl;

#define ADDR(ptr) cout << "Address: " << ptr << endl;
#define LOG(str) cout << "Value: " << str << endl;

int main(void) {
  string str = "HI THIS IS BRAIN";
  string *stringPTR = &str;
  string &stringREF = str;

  ADDR(&str);
  ADDR(stringPTR);
  ADDR(&stringREF);

  LOG(str);
  LOG(*stringPTR);
  LOG(stringREF);

  return 0;
}
