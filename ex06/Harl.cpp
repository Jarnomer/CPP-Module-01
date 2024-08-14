#include "Harl.hpp"

void Harl::debug(void) { cout << "Example debug message" << endl; }

void Harl::info(void) { cout << "Example info message" << endl; }

void Harl::warning(void) { cout << "Example warning message" << endl; }

void Harl::error(void) { cout << "Example error message" << endl; }

Harl::Harl(void) : logLevel(4) {}

Harl::~Harl(void) {}

void Harl::set_log_level(string level) {
  string levels[4] = {"INFO", "DEBUG", "WARNING", "ERROR"};

  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      logLevel = i;
      return;
    }
  }
}

void Harl::filter(string level) {
  void (Harl::*log[4])(void) = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
  string levels[4] = {"INFO", "DEBUG", "WARNING", "ERROR"};

  set_log_level(level);
  if (logLevel > 3) {
    cout << "Invalid logging level" << endl;
    return;
  }
  for (int i = logLevel; i < 4; i++) {
    cout << "[ " << levels[i] << " ]" << endl;
    (this->*log[i])();
  }
}
