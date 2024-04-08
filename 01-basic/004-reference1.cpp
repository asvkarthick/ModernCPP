#include <iostream>

int main(void)
{
    int x = 5;
    int &ref = x;

    std::cout << "x = " << x << std::endl;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "&ref = " << &ref << std::endl;

    ref = 10;
    std::cout << "x = " << x << std::endl;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "&ref = " << &ref << std::endl;

    int y = 20;
    ref = y;
    std::cout << "x = " << x << std::endl;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "&ref = " << &ref << std::endl;

    return 0;
}
