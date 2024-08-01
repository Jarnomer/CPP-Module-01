#include "Harl.hpp"

void Harl::debug(void) { cout << "Example debug message" << endl; }

void Harl::info(void) { cout << "Example info message" << endl; }

void Harl::warning(void) { cout << "Example warning message" << endl; }

void Harl::error(void) { cout << "Example error message" << endl; }

void Harl::complain(string level) {
  void (Harl::*log[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
  int i = 0;

  for (i = 0; i < 4; i++) {
    if (level == levels[i]) {
      break;
    }
  }
  cout << level << endl;
  if (i < 4) {
    (this->*log[i])();
  } else {
    cout << "Invalid level" << endl;
  }
}
