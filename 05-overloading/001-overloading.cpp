#include <iostream>

class Number
{
public:
    Number(int i)
    {
        this->number = i;
    }

    Number() = default;

    int getNumber() const
    {
        return number;
    }

    Number operator+(const Number& n)
    {
        Number temp;
	temp.number = this->number + n.number;
	return temp;
    }

private:
    int number;
};

int main(void)
{
    Number n1(2), n2(3);

    Number n3 = n1 + n2;

    std::cout << n3.getNumber() << std::endl;

    return 0;
}
