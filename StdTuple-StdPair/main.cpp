#include <iostream>
#include <vector>

template<int N>
class Array
{
private:
    const int m_Size{};
    int m_Array[m_Size]{};

public:
    int getSize()
    {
        return N;
    }
};

int main()
{
    Array<5> array;
    std::cout << array.getSize() << '\n';

    return 0;
}
