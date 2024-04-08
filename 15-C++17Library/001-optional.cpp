#include <iostream>

int main(void)
{
    std::optional<int> var;

    if (var.has_value()) {
        std::cout << "Var : " << var.value() << std::endl;
    } else {
        std::cerr << "Var not initialized" << std::endl;
    }

    if (var) {
        std::cout << "Value : " << *var << std::endl;
    } else {
        std::cerr << "Value not available" << std::endl;
    }

    return 0;
}
