/*
 * Implement the following functions

void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments
*/

#include <iostream>

void Add(int a, int b, int &result)
{
    result = a + b;
}

void Factorial(int a, int &result)
{
    int r = 1;
    for (int i = 1; i <=a; i++) r *= i;
    result = r;
}

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main(void)
{
    int a = 5, b = 6, result;

    Add(a, b, result);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "result = " << result << std::endl;

    Factorial(a, result);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "result = " << result << std::endl;

    Swap(a, b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "result = " << result << std::endl;

    return 0;
}
