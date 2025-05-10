#include <iostream>

int main() {
  static const int size = 5;
  int arr[size];

  for (int i = 0; i < size; i++) { arr[i] = 22; }

  for (int i = 0; i < size; i++) { std::cout << arr[i] << std::endl; }
}