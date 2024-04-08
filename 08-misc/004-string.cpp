#include <iostream>
#include <string>

int main(void)
{
    std::string s1 = "Hello";
    std::string s2 = "World";

    std::cout << "Length of s1 = " << s1.length() << std::endl;
    std::cout << "Length of s2 = " << s2.length() << std::endl;

    for (int i = 0; i < s1.length(); i++) std::cout << s1[i] << std::endl;

    std::string s = s1 + s2; // concat
    std::cout << "s = " << s << std::endl;

    std::cout << "Location of s2 = " << s.find(s2) << std::endl;

    // C-style string
    std::cout << "C-Style string s = " << s.c_str() << std::endl;

    return 0;
}
