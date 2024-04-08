#include <iostream>
#include <any>

int main(void)
{
    std::any var;

    var = 5;
    if (var.has_value()) {
        if (var.type() == typeid(int)) {
            std::cout << std::any_cast<int>(var) << std::endl;
	} else if (var.type() == typeid(std::string)) {
            std::cout << std::any_cast<std::string>(var) << std::endl;
	}
    }

    return 0;
}
