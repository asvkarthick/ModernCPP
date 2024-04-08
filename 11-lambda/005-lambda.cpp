#include <iostream>

int main(void)
{
    auto fn = []() {
        std::cout << "Introducing lambda" << std::endl;
    };

    std::cout << "Start of main" << std::endl;
    fn();

    return 0;
}
