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
    Base *b = new Derived();
    b->draw(); // Because of virtual it calls the correct draw function
    delete b; // Because of virtual it calls both Base and Derived class destructor
    return 0;
}
