#include <iostream>

int main(void)
{
    int a = 5;
    char *c = reinterpret_cast<char*>(&a);

    std::cout << c << std::endl;

    return 0;
}
