#include <iostream>

int main(void)
{
    // Allocate the memory
    int *ptr = new int;

    *ptr = 5;
    std::cout << *ptr << std::endl;
    // Deallocate/release the memory
    delete ptr;

    return 0;
}
