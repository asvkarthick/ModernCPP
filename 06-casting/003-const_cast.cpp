#include <iostream>

int main(void)
{
    const int a = 5;
    int *ptr = const_cast<int*>(&a);

    std::cout << *ptr << std::endl;

    return 0;
}
