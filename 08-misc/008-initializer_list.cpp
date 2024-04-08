#include <iostream>

void print(std::initializer_list<int> l)
{
    auto it = l.begin();
    while (it != l.end())
        std::cout << *it++ << std::endl;
}

int main(void)
{
    auto l = {1, 2, 3, 4, 5};
    print(l);

    for (auto x : {6, 7, 8, 9, 10})
        std::cout << x << std::endl;

    return 0;
}
