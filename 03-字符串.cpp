#include <iostream>

int main() {
  const char *name = "Sting";
  char name2[6] = "Sting";
  std::string name3 = "Sting";

  name3[0] = 'e';
  // name1[0] = 'e';
  name2[0] = 'e';

  std::cout << name << std::endl;
  std::cout << name2 << std::endl;
  std::cout << name3 << std::endl;

  return 0;
}