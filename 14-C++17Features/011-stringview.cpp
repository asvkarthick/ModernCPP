#include <iostream>
#include <string>
#include <string_view>

static uint32_t alloc = 0;
void* operator new(size_t s)
{
    alloc++;
    std::cout << "Allocated : " << s << std::endl;
    return malloc(s);
}

int main(void)
{
    std::string str1 {"Karthick Kumaran"};
    std::string_view str2 { str1.substr(0, 5) };
    std::string_view str3 { str1 };

    std::cout << str1 << std::endl
	    << str2 << std::endl
	    << str3 << std::endl;

    return 0;
}
