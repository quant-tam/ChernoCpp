#include <iostream>

class Entity {
public:
    int x;

public:
    void print() const {
        std::cout << "Hello!" << std::endl;
    }
};

class ScopedPtr {
private:
    Entity *m_Obj;

public:
    explicit ScopedPtr(Entity *entity) : m_Obj{entity} {
    }

    ~ScopedPtr() {
        delete m_Obj;
    }

    Entity *getObject() const {
        return m_Obj;
    }

    // 重载 -> 操作符
    Entity *operator->() const {
        return m_Obj;
    }

    // const 版本
    const Entity *operator->() {
        return m_Obj;
    }
};

struct Vector3 {
    float x, y, z;
};

int main() {
    // const ScopedPtr entity{new Entity};
    // entity->print();

    // 获取x的内存偏移量
    size_t offset = (size_t)&((Vector3*)nullptr)->x;
    std::cout << offset << std::endl;
    return 0;
}
