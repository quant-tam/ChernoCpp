#include <iostream>

class Example {
public:
    Example() {
        std::cout << "Created Entity!" << std::endl;
    }

    explicit Example(const int x) {
        std::cout << "Created Entity with " << x << "!" << std::endl;
    }
};

class Entity {
private:
    std::string m_Name;
    Example m_Example;

public:
    Entity(): m_Example(8) {
        m_Name = std::string("Unkown");
    }
};

int main() {
    Entity entity0;
    return 0;
}
