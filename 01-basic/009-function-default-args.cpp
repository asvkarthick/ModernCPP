#include <iostream>

void print(const char *str, int x = 0, int y = 0, int width = 1280, int height = 720)
{
    std::cout << "String = " << str << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "width = " << width << std::endl;
    std::cout << "height = " << height << std::endl;
}

int main(void)
{
    print("Karthick");
    print("ASVKK", 100, 100, 1920, 1080);

    return 0;
}
