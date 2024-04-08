#include <iostream>

class Inline
{
public:
    static inline int var = 20;
};

int main(void)
{
    std::cout << Inline::var << std::endl;

    return 0;
}
