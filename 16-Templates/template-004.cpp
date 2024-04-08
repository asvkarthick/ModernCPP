#include <iostream>

template <typename T>
T max(T n1, T n2)
{
    std::cout << typeid(T).name() << std::endl;
    return n1 > n2 ? n1 : n2;
}

template<> const char* max(const char *str1, const char *str2)
{
    std::cout << "Explicit Instantiation" << std::endl;
    return strcmp(str1, str2) > 0 ? str1 : str2;
}

int main(void)
{
    std::cout << max(3, 5) << std::endl;
    std::cout << max(3.0f, 5.1f) << std::endl;
    std::cout << max(3.0, 5.1) << std::endl;

    std::cout << max<float>(3.0, 5.1) << std::endl;
    std::cout << max("A", "B") << std::endl;

    return 0;
}
