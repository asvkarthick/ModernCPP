#include <iostream>
#include <set>

int main(void)
{
    std::set<int> s;
    s.insert(100);
    s.insert(200);
    s.insert(300);

    // Old way
    auto it = s.find(200);
    if (it != s.end()) {
        std::cout << "Element found" << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    // New method
    if (s.contains(200)) {
        std::cout << "set contains element" << std::endl;
    } else {
        std::cout << "set does not contain element" << std::endl;
    }

    return 0;
}
