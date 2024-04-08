#include <iostream>
#include <any>
#include <string>

int main(void)
{
    std::any var;

    var = 5;
    var.reset();
    var = std::string{"Karthick"};
    if (var.has_value()) {
        if (var.type() == typeid(int)) {
            std::cout << std::any_cast<int>(var) << std::endl;
	} else if (var.type() == typeid(std::string)) {
            std::cout << std::any_cast<std::string>(var) << std::endl;
	}
    }

    return 0;
}
