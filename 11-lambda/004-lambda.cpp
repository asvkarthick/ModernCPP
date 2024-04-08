#include <iostream>

int main(void)
{
    []() {
        std::cout << "Introducing lambda" << std::endl;
    }();

    return 0;
}
