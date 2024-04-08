#include <iostream>

class Class1
{
    int number;

public:
    Class1(int i) : number(i) {}
    Class1() = default;

    int getValue() const
    {
        return number;
    }

    void setValue(int i)
    {
        number = i;
    }
};

class Class2
{
    Class1 c;

public:
    Class2(int i)
    {
        c.setValue(i);
    }

    operator Class1()
    {
        std::cout << "Called overload userdefined operator" << std::endl;
        return c;
    }
};

int main(void)
{
    Class2 c2(10);
    Class1 c1 = c2;

    std::cout << c1.getValue() << std::endl;

    return 0;
}
