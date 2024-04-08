#include <iostream>

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int main(void)
{
    std::cout << add(5, 10) << std::endl;
    std::cout << add(2.0f, 3.0f) << std::endl;

    return 0;
}
