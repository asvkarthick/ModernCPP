#include <iostream>

int main(void)
{
    auto sum = [](int x, int y) {
	return x + y;
    };

    std::cout << "Start of main" << std::endl;
    std::cout << "Sum = " << sum(5, 6) << std::endl;
    std::cout << typeid(sum).name() << std::endl;

    return 0;
}
