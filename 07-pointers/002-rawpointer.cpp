#include <iostream>

int main(void)
{
    // Allocate the memory
    int *ptr = new int;

    *ptr = 5;
    std::cout << *ptr << std::endl;
    // Deallocate/release the memory
    delete ptr;

    ptr = new int;
    *ptr = 10;
    std::cout << *ptr << std::endl;
    delete ptr;

    return 0;
}
