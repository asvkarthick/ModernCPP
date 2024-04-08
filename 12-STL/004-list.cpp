#include <iostream>
#include <list>

int main(void)
{
    std::list<int> l;

    l.push_back(100);
    l.push_back(200);

    auto it = l.begin();
    l.insert(it, 10);

    std::cout << "Printing using range based for loop" << std::endl;
    for (auto &x : l) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Printing using iterators" << std::endl;
    it = l.begin();
    for (; it != l.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Removing an element
    it = l.begin();
    if (it != l.end()) {
        l.erase(it);
    }

    std::cout << "Printing using iterators after deleting an element" << std::endl;
    it = l.begin();
    for (; it != l.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
