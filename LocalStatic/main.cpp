#include <iostream>

class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton s_Instance;
        return s_Instance;
    }
    void printInstance() {
        std::cout << "instance : " << sizeof(getInstance())<< std::endl;
    }
};


// void Function() {
//     static int i{0};
//     i++;
//     std::cout << i << std::endl;
// }

int main() {
    // Function();
    // Function();
    // Function();
    // Function();
    // Function();
    Singleton::getInstance().printInstance();
    return 0;
}