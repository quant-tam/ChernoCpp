#include <iostream>

class Entity {
public:
    Entity() {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity() {
        std::cout << "Destroyed Entity!" << std::endl;
    }
};

class ScopedPtr {
private:
    Entity *m_Ptr = nullptr;

public:
    explicit ScopedPtr(Entity *ptr) : m_Ptr(ptr) {
    }

    ~ScopedPtr() {
        delete m_Ptr;
    }
};

int main() {
    ScopedPtr e{new Entity()}  ;
    return 0;
}
