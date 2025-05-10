#include <iostream>

class Fruit {
public:
  enum FruitType { apple, banana, cherry };

private:
  FruitType m_Type{};
  int m_PercentageEaten{0};

public:
  Fruit(FruitType type) : m_Type{type} {}

  FruitType getType() const { return m_Type; }
  int getPercentageEaten() const { return m_PercentageEaten; }
};

int main() {
  Fruit apple{Fruit::apple};
  // std::cout << apple.getType() << '\n';

  if (apple.getType() == Fruit::apple) {
    std::cout << "I am  an apple\n";
  } else {
    std::cout << "I am not an apple\n";
  }

  return 0;
}