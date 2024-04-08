#include <iostream>

using Comparator = bool (*)(int, int);
template<typename T, int size>
void sort(T(&arr)[size])
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	}
    }
}

int main(void)
{
    int arr[] {5, 4, 3, 2, 1};
    sort(arr);

    for (auto i : arr) std::cout << i << std::endl;

    return 0;
}
