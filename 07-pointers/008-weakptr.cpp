#include <iostream>
#include <memory>

class WeakPointer
{
    std::weak_ptr<int> ptr;

public:
    void setPointer(std::weak_ptr<int> p)
    {
        ptr = p;
    }

    void print() const
    {
        if (ptr.expired()) {
            std::cerr << "Weak pointer resource not available" << std::endl;
	    return;
	}
        auto sp = ptr.lock();
        std::cout << "Data : " << *sp << std::endl;
	std::cout << "Ref count : " << sp.use_count() << std::endl;
    }
};

int main(void)
{
    std::shared_ptr<int> sp = std::make_shared<int>();
    WeakPointer wp;
    wp.setPointer(sp);

    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;

    if (num > 100) {
        sp = nullptr;
    }
    wp.print();

    return 0;
}
