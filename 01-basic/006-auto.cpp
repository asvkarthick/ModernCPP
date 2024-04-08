#include <iostream>
#include <string.h>
#include <string>

int func(const char* s)
{
    return strlen(s);
}

int main(void)
{
    auto i = 3;
    auto j = 3.14f;
    auto str = "Karthick";
    auto k = i + j;
    auto ret = func(str);

    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    std::cout << "k = " << k << std::endl;
    std::cout << "str = " << str << std::endl;
    std::cout << "ret = " << ret << std::endl;

    return 0;
}
