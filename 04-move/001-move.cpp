#include <iostream>

// Return by value R-value
int add(int x, int y)
{
    return x + y;
}

// Return by reference L-value
int& returnRef(int& x)
{
    return x;
}

int main(void)
{
    int x = 10;

    std::cout << x << std::endl;
    returnRef(x) = 20;
    std::cout << x << std::endl;
    x = add(x, x);
    std::cout << x << std::endl;

    return 0;
}
