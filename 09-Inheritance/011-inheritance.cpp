#include <iostream>

class Base
{

};

class Derived1 : public Base
{

};

class Derived2 : public Derived1
{

};

class Derived3 : public Base
{

};

int main(void)
{
    Derived2 *d2 = new Derived2();

    Derived1 *d1 = dynamic_cast<Derived1*>(d2);
    if (d1 != nullptr) {
        std::cout << "Derived2 can be dynamic_cast to Derived1" << std::endl;
    } else {
        std::cout << "Derived2 cannot be dynamic_cast to Derived1" << std::endl;
    }

    delete d2;

    return 0;
}
