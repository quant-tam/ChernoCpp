#include <iostream>
#include <string>
#include <memory>

class Entity {
    public:
    Entity() {
        std::cout << "Entity created" << std::endl;
    }
    ~Entity() {
        std::cout << "Entity destroyed" << std::endl;
    }

    void printFunc() const {
        std::cout << "Entity printed" << std::endl;
    }
};

int main() {
    {
        auto entityPtr = std::make_unique<Entity>();
        entityPtr->printFunc();
    }
    return 0;
}