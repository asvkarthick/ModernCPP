#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std::ofstream out {"data.txt"};
    std::string data {"Karthick"};
    for (auto ch : data) {
        out.put(ch);
    }
    out.close();

    std::ifstream in {"data.txt"};
    char c;
    while (!in.get(c).eof()) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}
