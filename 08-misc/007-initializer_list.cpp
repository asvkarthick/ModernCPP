#include <iostream>
#include <initializer_list>

class InitializerList
{
    int arr[10];
    int size {};

public:
    InitializerList(std::initializer_list<int> l)
    {
        if (l.size() > 10) return;
	auto it = l.begin();
	while (it != l.end()) {
            add(*it);
	    ++it;
	}
    }

    void add(int d)
    {
        arr[size++] = d;
    }

    void remove()
    {
        --size;
    }

    int operator[](int i)
    {
        return arr[i];
    }

    int getSize()
    {
        return size;
    }
};

int main(void)
{
    InitializerList il {1, 2, 3, 4, 5};

    for (int i = 0; i < il.getSize(); i++) {
        std::cout << il[i] << std::endl;
    }

    return 0;
}
