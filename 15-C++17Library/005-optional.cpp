#include <iostream>

enum class Color : int { RED, GREEN, BLUE };

std::optional<int> returnErrorCode(Color c)
{
    if (c == Color::RED)
        return 0;
    else if (c == Color::GREEN)
        return 1;
    else
        return std::nullopt;
}

int main(void)
{
    auto i = returnErrorCode(Color::RED);
    if (i.has_value()) {
        std::cout << "Color::RED error code " << i.value() << std::endl;
    } else {
        std::cerr << "Color::RED does not have error code" << std::endl;
    }

    auto j = returnErrorCode(Color::BLUE);
    if (j.has_value()) {
        std::cout << "Color::BLUE error code " << j.value() << std::endl;
    } else {
        std::cerr << "Color::BLUE does not have error code" << std::endl;
    }

    std::cout << "j value " << j.value_or(-1) << std::endl;
    return 0;
}
