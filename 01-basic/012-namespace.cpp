#include <iostream>

namespace avg {
    float compute(float x, float y)
    {
        return (x + y) / 2;
    }
}

namespace sum {
    float compute(float x, float y)
    {
        return x + y;
    }
}

int main(void)
{
    std::cout << avg::compute(3.0f, 5.0f) << std::endl;
    std::cout << sum::compute(3.0f, 5.0f) << std::endl;

    return 0;
}
