#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> vec;

    for (int i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    std::cout << "Printing using range based for loop" << std::endl;
    for (auto x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Printing using iterators" << std::endl;
    auto it = vec.begin();
    for (; it != vec.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Printing using index" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
