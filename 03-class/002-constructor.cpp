#include <iostream>

class Class
{
public:
    Class()
    {
        std::cout << "Constructor" << std::endl;
    }

    void print()
    {
        std::cout << "Print member function" << std::endl;
    }

    ~Class()
    {
        std::cout << "Destructor" << std::endl;
    }
};

int main(void)
{
    Class obj;

    obj.print();

    return 0;
}
