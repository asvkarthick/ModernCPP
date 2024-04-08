#include <iostream>

int main(void)
{
    int x = 5;
    std::cout << x << " " << std::clamp(x, 0, 255) << std::endl;
    x = 0;
    std::cout << x << " " << std::clamp(x, 0, 255) << std::endl;
    x = 100;
    std::cout << x << " " << std::clamp(x, 0, 255) << std::endl;
    x = 255;
    std::cout << x << " " << std::clamp(x, 0, 255) << std::endl;
    x = -20;
    std::cout << x << " " << std::clamp(x, 0, 255) << std::endl;
    x = 1000;
    std::cout << x << " " << std::clamp(x, 0, 255) << std::endl;

    return 0;
}
