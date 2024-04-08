#include <iostream>

[[deprecated("This is deprecated")]]
void deprecatedFunction()
{
    std::cout << "Deprecated function" << std::endl;
}

int main(void)
{
    deprecatedFunction();
    return 0;
}
