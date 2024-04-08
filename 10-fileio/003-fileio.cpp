#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std::ofstream out {"data.txt"};
    out << "Karthick" << std::endl;
    out.close();

    std::string msg;
    std::ifstream in {"data.txt"};
    if (!in.is_open()) {
        std::cerr << "Error opening data.txt" << std::endl;
	return -1;
    }
    in >> msg;
    std::cout << "Message : " << msg << std::endl;
    return 0;
}
