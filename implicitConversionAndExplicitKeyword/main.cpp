#include <iostream>

class Cents {
private:
    int m_Cents;

public:
    Cents(): m_Cents{0}{}

    explicit Cents(int cents): m_Cents{cents}{};

    [[nodiscard]] int getCents()const {
        return m_Cents;
    }
};

void printCents(const Cents &cents) {
    std::cout << cents.getCents() << std::endl;
}

int main() {

    printCents(Cents(5));

    return 0;
}
