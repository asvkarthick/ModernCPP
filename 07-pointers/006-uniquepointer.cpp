#include <iostream>
#include <memory>

void callByValue(std::unique_ptr<int> ptr)
{
    std::cout << *ptr << std::endl;
}

void callByRef(std::unique_ptr<int> &ptr)
{
    std::cout << *ptr << std::endl;
}

int main(void)
{
    // Works from C++17
    std::unique_ptr<int> ptr = std::make_unique<int>();
    *ptr = 5;
    callByValue(std::move(ptr));

    // reset deallocates existing memory and assigns the newly
    // allocated memory
    ptr.reset(new int);
    *ptr = 10;
    callByRef(ptr);

    return 0;
}
