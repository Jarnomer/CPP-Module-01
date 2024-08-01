#include "Harl.hpp"

void Harl::debug(void) {
  cout << "I love having extra bacon for my "
          "7XL-double-cheese-triple-pickle-specialketchup burger. "
          "I really do!" << endl;
}

void Harl::info(void) {
  cout << "I cannot believe adding extra bacon costs more money." << endl
       << "You didn't put enough bacon in my burger! If you did, I "
          "wouldn't be asking for more!" << endl;
}

void Harl::warning(void) {
  cout << "I think I deserve to have some extra bacon for free." << endl
       << "I've been coming for years whereas you started working here "
          "since last month." << endl;
}

void Harl::error(void) {
  cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level) {
  string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
  int i;

  for (i = 0; i < 4; i++) {
    if (level == levels[i]) {
      break;
    }
  }
  switch (i) {
  case 0:
    debug();
    break;
  case 1:
    error();
    break;
  case 2:
    info();
    break;
  case 3:
    warning();
    break;
  default:
    cout << "Invalid level" << endl;
  };
}
