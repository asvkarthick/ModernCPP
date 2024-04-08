#include <iostream>
#include <queue>

int main(void)
{
    std::queue<int> q;
    q.push(1);
    std::cout << q.size() << std::endl;
    q.push(2);
    std::cout << q.size() << std::endl;
    q.push(3);
    std::cout << q.size() << std::endl;
    q.push(4);
    std::cout << q.size() << std::endl;

    return 0;
}
