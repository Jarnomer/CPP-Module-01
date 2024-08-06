#include "Sed.hpp"

void Sed::replace() {
  stringstream input;
  stringstream result;
  size_t next = 0;
  size_t prev = 0;

  input << infile.rdbuf();
  while (next != string::npos) {
    next = input.str().find(s1, prev);
    result << input.str().substr(prev, next - prev) << s2;
    prev = next + s1.length();
  }
  outfile << result.str();
}

Sed::Sed(string file, string s1, string s2) : file(file), s1(s1), s2(s2) {
  string newFile;

  if (file.find_first_of(".")) {
    newFile = file.substr(0, file.find_first_of(".")) + ".replace";
  } else {
    newFile = file + ".replace";
  }
  infile.open(file, std::fstream::in);
  if (infile.fail()) {
    cout << file << ": " << strerror(errno) << endl;
    return;
  }
  outfile.open(newFile, std::fstream::out);
  if (outfile.fail()) {
    cout << newFile << ": " << strerror(errno) << endl;
  }
}

Sed::~Sed(void) {
  if (infile.is_open())
    infile.close();
  if (outfile.is_open())
    outfile.close();
}
