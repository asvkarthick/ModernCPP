#include <iostream>

enum Shape { CIRCLE, RECTANGLE, SQUARE };

void draw(Shape s)
{
    if (s == CIRCLE)
        std::cout << "Draw circle" << std::endl;
    else if (s == RECTANGLE)
        std::cout << "Draw rectangle" << std::endl;
    else if (s == SQUARE)
        std::cout << "Draw square" << std::endl;
    else
        std::cout << "Unknown shape" << std::endl;
}

int main(void)
{
    draw(CIRCLE);
    draw(SQUARE);

    return 0;
}
