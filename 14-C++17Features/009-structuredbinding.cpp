#include <iostream>
#include <map>
#include <string>

int main(void)
{
    std::map<int, std::string> m;
    m[0] = "Karthick";
    m[1] = "Kumaran";
    m[2] = "ASV";

    for (auto [key, value] : m)
    {
        std::cout << key << " : " << value << std::endl;
    }

    return 0;
}
