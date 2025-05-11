#include <iostream>
#include <string>

class String {
private:
    char *m_Buffer = nullptr;
    size_t m_Size{0};

public:
    explicit String(const char *string) {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size + 1);
        m_Buffer[m_Size] = '\0';
    }

    ~String() {
        delete[] m_Buffer;
        m_Buffer = nullptr;
    }

    String(const String &other): m_Size{other.m_Size} {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
        m_Buffer[m_Size] = '\0';
        std::cout << "copy constructor" << std::endl;
    }

    String &operator=(const String &other) {
        if (this != &other) {
            return *this;
        }
        delete[] m_Buffer;
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
        m_Buffer[m_Size] = '\0';
        std::cout << "copy assignment operator=" << std::endl;
        return *this;
    }

    char &operator[](const size_t index) const {
        if (index >= m_Size) {
            throw std::out_of_range("index out of range");
        }
        return m_Buffer[index];
    }

    friend std::ostream &operator<<(std::ostream &out, const String &str);
};

std::ostream &operator<<(std::ostream &out, const String &str) {
    out << str.m_Buffer;
    return out;
}

void printString(const String& str) {
    std::cout << str << std::endl;
}

int main() {
    const String string{"Hello, World!"};
    const String secondString = string;

    std::cout << string << std::endl;
    std::cout << secondString << std::endl;
    secondString[2] = 'a';
    printString(string);
    printString(secondString);

    return 0;
}
