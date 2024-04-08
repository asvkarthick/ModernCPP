// This program will not release the resource because of circular reference
// To prove this see the destructor will not be called

#include <iostream>
#include <memory>

class Class2;

class Class1
{
    std::shared_ptr<Class2> ptr;

public:
    Class1()
    {
        std::cout << "Class1 constructor" << std::endl;
    }
    ~Class1()
    {
        std::cout << "Class1 destructor" << std::endl;
    }

    void setPtr(std::shared_ptr<Class2> &c)
    {
        ptr = c;
    }
};

class Class2
{
    std::shared_ptr<Class1> ptr;

public:
    Class2()
    {
        std::cout << "Class2 constructor" << std::endl;
    }
    ~Class2()
    {
        std::cout << "Class2 destructor" << std::endl;
    }

    void setPtr(std::shared_ptr<Class1> &c)
    {
        ptr = c;
    }
};

int main(void)
{
    std::shared_ptr<Class1> ptr1 = std::make_shared<Class1>();
    std::shared_ptr<Class2> ptr2 = std::make_shared<Class2>();

    ptr1->setPtr(ptr2);
    ptr2->setPtr(ptr1);

    return 0;
}
