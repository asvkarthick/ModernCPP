#include <iostream>

int main(void)
{
    int a = 3, b = 2;
    float c = a / b;
    std::cout << c << std::endl;
    c = static_cast<float>(a) / static_cast<float>(b);
    std::cout << c << std::endl;

    return 0;
}
