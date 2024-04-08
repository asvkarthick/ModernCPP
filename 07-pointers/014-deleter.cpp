#include <iostream>
#include <memory>

struct Free
{
    void operator()(int *p)
    {
        std::cout << "Freeing ptr" << std::endl;
	free(p);
    }
};

int main(void)
{
    std::shared_ptr<int> ptr { (int*) malloc(sizeof(int)), Free{} };
    *ptr = 10;
    std::cout << *ptr << std::endl;
    return 0;
}
