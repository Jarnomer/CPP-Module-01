#include "Harl.hpp"

void Harl::debug(void) { cout << "Example debug message" << endl; }

void Harl::info(void) { cout << "Example info message" << endl; }

void Harl::warning(void) { cout << "Example warning message" << endl; }

void Harl::error(void) { cout << "Example error message" << endl; }

void Harl::complain(string level) {
  string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
  void (Harl::*log)(void) = nullptr;
  int id = 0;

  for (id = 0; id < 4; id++) {
    if (level == levels[id]) {
      break;
    }
  }
  cout << level << endl;
  switch (id) {
  case 0:
    log = &Harl::debug;
    break;
  case 1:
    log = &Harl::error;
    break;
  case 2:
    log = &Harl::info;
    break;
  case 3:
    log = &Harl::warning;
    break;
  default:
    cout << "Invalid level" << endl;
  };
  if (log) {
    (this->*log)();
  }
}
