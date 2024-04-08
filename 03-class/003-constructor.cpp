#include <iostream>

class Class
{
public:
    Class()
    {
        std::cout << "Default constructor : " << this << std::endl;
    }

    Class(int i)
    {
        std::cout << "Parameterized constructor : " << this << std::endl;
    }

    void print()
    {
        std::cout << "Print member function : " << this << std::endl;
    }

    ~Class()
    {
        std::cout << "Destructor : " << this << std::endl;
    }
};

int main(void)
{
    Class obj1;
    Class obj2(10);

    obj1.print();
    obj2.print();

    return 0;
}
