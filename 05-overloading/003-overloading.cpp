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

    Number operator+(int x)
    {
        Number temp;
	temp.number = this->number + x;
	return temp;
    }

    // Pre-increment
    Number operator++()
    {
        ++number;
	return *this;
    }

    // Post-increment
    Number operator++(int n)
    {
        Number temp(*this);
	++number;
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
    ++n1;
    std::cout << n1.getNumber() << std::endl;
    std::cout << (n2++).getNumber() << std::endl;

    Number n4 = n2 + 5;
    std::cout << n4.getNumber() << std::endl;

    return 0;
}
