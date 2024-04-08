/*
Implement the following functions using pointer arguments only

int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument
*/

#include <iostream>

int Add(int *a, int *b)
{
    return *a + *b;
}

void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void Swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Factorial(int *a, int *result)
{
    int res = 1;
    for (int i = 1; i <= *a; i++) res = res * i;
    *result = res;
}

int main(void)
{
    int a = 5, b = 6, result;
    result = Add(&a, &b);
    std::cout << result << std::endl;

    a = 10;
    b = 20;
    AddVal(&a, &b, &result);
    std::cout << result << std::endl;

    Swap(&a, &b);
    std::cout << a << " " << b << std::endl;

    a = 5;
    Factorial(&a, &result);
    std::cout << result << std::endl;

    return 0;
}
