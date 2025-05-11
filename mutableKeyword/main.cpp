#include <iostream>

class Entity {
private:
    std::string m_Name;
    mutable int m_DebugCount{0};
public:
     std::string getName() const {
        m_DebugCount++;
        return m_Name;
    }
    void setName(const std::string& name) {
        m_Name = name;
    }

};

int main() {
    Entity entity;
    entity.setName("Sting");
    // std::cout << entity.getName() << std::endl;

    int x = 8;
    auto f = [=]() mutable {
        x++;
        std::cout << x << std::endl;
    };

    f();
    return 0;
}