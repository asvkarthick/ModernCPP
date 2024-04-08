#include <iostream>
#include <memory>

int main(void)
{
    std::unique_ptr<int> ptr { new int };
    *ptr = 5;
    std::cout << *ptr << std::endl;

    // reset deallocates existing memory and assigns the newly
    // allocated memory
    ptr.reset(new int);
    *ptr = 10;
    std::cout << *ptr << std::endl;
    // Memory will be released automatically with unique_ptr
    // no need of explicit delete

    return 0;
}
