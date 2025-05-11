#include <iostream>
#define LOG(x) std::cout << x << std::endl
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
  int var{8};
  int* ptr{&var};
  // std::cout << ptr << std::endl;
  // std::cout << *ptr << std::endl;

  // double *ptrDouble = (double*)&var;
  // std::cout << *ptrDouble << std::endl;
  // std::cout << ptrDouble << std::endl;

  *ptr = 12;
  LOG(var);



  return 0;
  // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}