#include <iostream>

class Number
{
    int num;

public:
    Number(int i) : num(i) {}

    operator int()
    {
        return num;
    }
};

int main(void)
{
    Number n(10);
    int x = n;

    std::cout << x << std::endl;

    return 0;
}
