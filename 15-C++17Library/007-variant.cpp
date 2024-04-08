#include <iostream>
#include <variant>

int main(void)
{
    std::variant<std::string, int> v{2};
    auto val = std::get<int>(v);
    std::cout << val << std::endl;

    auto index = v.index();
    std::cout << "Active index = " << index << std::endl;

    auto s = std::get_if<std::string>(&v);
    if (s != nullptr) {
        std::cout << "s = " << *s << std::endl;
    } else {
        std::cout << "s is nullptr" << std::endl;
    }

    return 0;
}
