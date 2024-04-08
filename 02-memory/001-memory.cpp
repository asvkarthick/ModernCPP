#include <iostream>

int main(void)
{
    int *ptr = new int;
    *ptr = 5;
    std::cout << *ptr << std::endl;
    delete ptr;

    return 0;
}
