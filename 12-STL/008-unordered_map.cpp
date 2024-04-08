#include <iostream>
#include <unordered_map>
#include <string>

int main(void)
{
    std::unordered_map<int, std::string> m;
    m[0] = "Karthick";
    m[1] = "Kumaran";
    m[2] = "ASV";

    m.insert(std::make_pair<int, std::string>(3, "KK"));

    std::cout << "Printing using range based for loop" << std::endl;
    for (auto &x : m) {
        std::cout << x.first << " : " << x.second << std::endl;
    }

    auto it = m.find(3);
    if (it != m.end()) {
        std::cout << "Element found, deleting it" << std::endl;
	m.erase(it);
    } else {
        std::cout << "Element not found" << std::endl;
    }

    std::cout << "Printing using iterators" << std::endl;
    it = m.begin();
    for (; it != m.end(); it++) {
        std::cout << it->first << " : " << it->second << std::endl;
    }

    return 0;
}
