#include <iostream>

int main(void)
{
    int *p1 = new int[3] {1, 2, 3};
    int *p2 = new int[3] {4, 5, 6};
    int **ptr = new int*[2] {p1, p2};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << ptr[i][j] << " ";
	}
	std::cout << std::endl;
    }

    delete[] ptr;
    delete[] p1;
    delete[] p2;

    return 0;
}
