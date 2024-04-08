#include <iostream>

int main(void)
{
    int x = 5;
    auto f = [y = x](int var) { return y + var; };
    std::cout << f(20) << std::endl;

    return 0;
}
