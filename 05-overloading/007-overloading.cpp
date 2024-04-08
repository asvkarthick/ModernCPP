#include <iostream>

class Number
{
    int number;

public:
    void setNumber(int i)
    {
        number = i;
    }

    int getNumber() const
    {
        return number;
    }
};

class NumPtr
{
    Number *numPtr;

public:
    NumPtr(Number *ptr) : numPtr(ptr) {}

    ~NumPtr()
    {
        delete numPtr;
    }

    Number* operator->()
    {
        return numPtr;
    }
};

int main(void)
{
    NumPtr n = new Number;
    n->setNumber(10);
    std::cout << n->getNumber() << std::endl;

    return 0;
}
