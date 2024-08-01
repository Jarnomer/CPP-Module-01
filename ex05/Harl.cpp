#include "Harl.hpp"

void Harl::debug(void) { cout << "Example debug message" << endl; }

void Harl::info(void) { cout << "Example info message" << endl; }

void Harl::warning(void) { cout << "Example warning message" << endl; }

void Harl::error(void) { cout << "Example error message" << endl; }

void Harl::complain(string level) {
  void (Harl::*log[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};

  cout << level << endl;
  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*log[i])();
      break;
    } else if (i == 3) {
      cout << "Invalid level" << endl;
      break;
    }
  }
}
