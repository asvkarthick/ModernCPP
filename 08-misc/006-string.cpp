#include <iostream>
#include <sstream>

int main(void)
{
    std::string data = "1 2 3 4 5";
    std::stringstream ss;
    ss.str(data);
    int n;

    while (ss >> n) {
	std::cout << n << std::endl;
    }
}
