#include "Sed.hpp"

static void create_testfile(string file) {
  std::ofstream TestFile(file);
  TestFile << "aaabbbfgh" << endl;
  TestFile << "aabbccdfg" << endl;
  TestFile << "abbbccc12" << endl;
  TestFile.close();
}

int main(int argc, char **argv) {
  if (argc != 4) {
    cout << "Usage: ./sed <filename> <s1> <s2>";
    return 1;
  }
  create_testfile(argv[1]);
  Sed sed(argv[1], argv[2], argv[3]);
  sed.replace();
  return 0;
}
