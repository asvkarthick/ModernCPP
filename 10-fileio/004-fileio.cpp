#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std::string msg;
    std::fstream inout {"data.txt"};
    inout << "Karthick";

    inout >> msg;
    std::cout << "Message-1 : " << msg << std::endl;

    inout.seekg(0);
    inout >> msg;
    std::cout << "Message-2 : " << msg << std::endl;

    inout.close();
    return 0;
}
