#include <iostream>

[[deprecated("This is deprecated")]]
void deprecatedFunction()
{
    std::cout << "Deprecated function" << std::endl;
}

[[nodiscard]]
int* allocateMemory(int size)
{
    return new int[size];
}

int main(void)
{
    deprecatedFunction();
    allocateMemory(5);
    return 0;
}
