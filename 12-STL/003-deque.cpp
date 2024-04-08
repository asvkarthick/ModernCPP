#include <iostream>
#include <deque>

int main(void)
{
    std::deque<int> dq;

    // Insert at rear
    for (int i = 0; i < 5; i++) {
        dq.push_back(i);
    }

    // Insert at front
    for (int i = 0; i < 5; i++) {
        dq.push_front(i);
    }

    std::cout << "Printing elements using range based for loop" << std::endl;
    for (auto x : dq) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "Printing using iterators" << std::endl;
    for (auto it = dq.begin(); it != dq.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "First element : " << dq.front() << std::endl;
    dq.pop_front();
    std::cout << "First element : " << dq.front() << std::endl;
    dq.pop_front();
    std::cout << "Last element : " << dq.back() << std::endl;
    dq.pop_back();
    std::cout << "Last element : " << dq.back() << std::endl;
    dq.pop_back();

    return 0;
}
