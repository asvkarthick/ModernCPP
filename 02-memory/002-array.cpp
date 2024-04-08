#include <iostream>

int main(void)
{
    int *p1 = new int[5];
    for (int i = 0; i < 5; i++) p1[i] = i;
    for (int i = 0; i < 5; i++) std::cout << p1[i] << std::endl;

    int *p2 = new int[5] {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++) std::cout << p2[i] << std::endl;

    delete[] p1;
    delete[] p2;

    return 0;
}
