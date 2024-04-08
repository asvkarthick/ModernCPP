#include <iostream>
#include <set>
#include <string>

int main(void)
{
    std::set<std::string> s;
    s.insert("karthick");
    s.insert("Kumaran");
    s.insert("aSV");

    auto it = s.find("aSV");
    if (it != s.end()) {
        auto str = *it;
	str[0] = 'A';
	s.erase(it);
	s.insert(str);
    }

    for (auto &x : s) {
        std::cout << x << std::endl;
    }

    // New Method
    it = s.find("karthick");
    if (it != s.end()) {
        auto node = s.extract(it);
	node.value()[0] = 'K';
        s.insert(std::move(node));
    }

    std::cout << "Print set after modified with new method" << std::endl;
    for (auto &x : s) {
        std::cout << x << std::endl;
    }

    return 0;
}
