#include <iostream>

int main(void)
{
    int x = 10;
    int *ptr = &x;
    *ptr = 20;
    std::cout << "x = " << x << std::endl;
    x = 25;
    std::cout << "*ptr = " << *ptr << std::endl;

    return 0;
}
