#include <iostream>

void func()
{
    if (int *p = new int; p != nullptr) {
        *p = 30;
	std::cout << *p << std::endl;
	delete p;
    } else {
        std::cerr << "Memory allocation failure" << std::endl;
    }
}

int main(void)
{
    func();

    return 0;
}
