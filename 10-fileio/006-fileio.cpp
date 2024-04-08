#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    int n = 54321;
    std::ofstream out {"data.bin", std::ios::binary | std::ios::out};
    out.write((const char*)&n, sizeof(int));
    out.close();

    int x;
    std::ifstream in {"data.bin", std::ios::binary | std::ios::in};
    in.read((char*)&x, sizeof(int));
    std::cout << "Data : " << x << std::endl;
    in.close();

    return 0;
}
