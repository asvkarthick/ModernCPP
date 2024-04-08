#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base constructor" << std::endl;
    }
    virtual ~Base()
    {
        std::cout << "Base destructor" << std::endl;
    }

    virtual void draw()
    {
        std::cout << "Base draw" << std::endl;
    }
};

// Derived class cannot be derived because of "final"
class Derived final : public Base
{
public:
    Derived()
    {
        std::cout << "Derived constructor" << std::endl;
    }
    ~Derived()
    {
        std::cout << "Derived destructor" << std::endl;
    }

    void draw() override
    {
        std::cout << "Derived draw" << std::endl;
    }
};

int main(void)
{
    Derived d;
    Base *b = &d;

    int i {};

    const std::type_info &ti = typeid(d);
    std::cout << ti.name() << std::endl;
    return 0;
}
