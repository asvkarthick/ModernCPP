#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int (*fnptr)(int, int);

    fnptr = add;

    std::cout << fnptr(5, 10) << std::endl;

    return 0;
}
