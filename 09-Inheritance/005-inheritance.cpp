#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base constructor" << std::endl;
    }
    ~Base()
    {
        std::cout << "Base destructor" << std::endl;
    }

    virtual void draw()
    {
        std::cout << "Base draw" << std::endl;
    }
};

class Derived : public Base
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

    void draw()
    {
        std::cout << "Derived draw" << std::endl;
    }
};

int main(void)
{
    Derived d;
    Base *b = &d;
    d.draw();
    b->draw(); // Because of virtual it calls the correct draw function
    return 0;
}
