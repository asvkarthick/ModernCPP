#include <iostream>

template <typename T>
T add(T n1, T n2)
{
    return n1 + n2;
}

int main(void)
{
    std::cout << add(3, 5) << std::endl;
    std::cout << add(3.0f, 5.1f) << std::endl;

    return 0;
}
