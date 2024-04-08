#include <iostream>
#include <set>

int main(void)
{
    std::set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(2);

    std::cout << "Set stores the elements in the sorted order" << std::endl;
    for (auto &x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Printing elements using iterators" << std::endl;
    auto it = s.begin();
    for (; it != s.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    it = s.find(5);
    if (it != s.end()) {
        std::cout << "Element found" << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    std::cout << "Deleting an element" << std::endl;
    it = s.find(5);
    if (it != s.end()) {
        s.erase(it);
    }

    for (auto &x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
