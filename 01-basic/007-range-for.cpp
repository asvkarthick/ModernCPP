#include <iostream>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};

    for (auto &x : arr) {
        std::cout << x << std::endl;
    }

    for (auto &x : {2, 4, 6, 8, 10}) {
        std::cout << x << std::endl;
    }
    
    return 0;
}
