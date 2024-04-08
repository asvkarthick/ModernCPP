#include <iostream>

using Comparator = bool (*)(int, int);
template<typename T, int size, typename Comparator>
void sort(T(&arr)[size], Comparator comp)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (comp(arr[i], arr[j])) {
                T temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	    }
	}
    }
}

struct ComparatorStruct
{
    bool operator()(int x, int y)
    {
        return x > y;
    }
};

bool Compare(int x, int y)
{
    return x > y;
}

int main(void)
{
    int arr[] {5, 4, 3, 2, 1};
    ComparatorStruct comp;
    sort(arr, Compare);

    for (auto i : arr) std::cout << i << std::endl;

    return 0;
}
