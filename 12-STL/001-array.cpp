#include <iostream>
#include <array>

int main(void)
{
    std::array<int, 5> arr;
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }

    std::cout << "Print using range based for loop" << std::endl;
    for (auto x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Printing using iterators" << std::endl;
    auto it = arr.begin();
    for (; it != arr.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Printing using index" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
