#include <iostream>

int main(void)
{
    int a {20};
    char b {'c'};
    char c[8] {"ASVKK"};
    std::string str {"Karthick"};
    float f {3.14};
    double d {1.23};

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "str = " << str << std::endl;

    return 0;
}
