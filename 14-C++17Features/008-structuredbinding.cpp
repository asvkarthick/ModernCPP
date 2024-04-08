#include <iostream>

int main(void)
{
    int arr[] {1, 2, 3};
    auto [a, b, c] = arr;

    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}
