#include <iostream>
#include <fstream>
#include <string>

void writeToFile()
{
    std::ofstream file{"file.txt"};
    file << "Hello FileIO" << std::endl;
    file << 123 << std::endl;
    file.close();
}

void readFromFile()
{
    std::ifstream file {"file.txt"};
    std::string msg;
    int n;
    std::getline(file, msg);
    file >> n;
    file.close();
    std::cout << msg << " - " << n << std::endl;
}
int main(void)
{
    writeToFile();
    readFromFile();

    return 0;
}
