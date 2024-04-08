#include <iostream>

enum class Shape : int { CIRCLE, RECTANGLE, SQUARE };

void draw(Shape s)
{
    if (s == Shape::CIRCLE)
        std::cout << "Draw circle" << std::endl;
    else if (s == Shape::RECTANGLE)
        std::cout << "Draw rectangle" << std::endl;
    else if (s == Shape::SQUARE)
        std::cout << "Draw square" << std::endl;
    else
        std::cout << "Unknown shape" << std::endl;
}

int main(void)
{
    draw(Shape::CIRCLE);
    draw(Shape::SQUARE);

    return 0;
}
