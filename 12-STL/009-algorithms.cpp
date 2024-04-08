#include <iostream>
#include <algorithm>

class Employee
{
    int id;
    std::string name;
    std::string language;

public:
    Employee(int i, std::string n, std::string l) : id(i), name(n), language(l) {}

    int getId() const
    {
        return id;
    }
    std::string getName() const
    {
        return name;
    }
    std::string getLanguage() const
    {
        return language;
    }
};

int main(void)
{
    std::vector<Employee> v {
        Employee{ 1, "Karthick", "C++"},
	Employee{ 2, "Kumaran", "Python"},
	Employee{ 3, "ASV", "C++"}
    };

    std::sort(v.begin(), v.end(), [](const auto &e1, const auto &e2) {
        return e1.getName() < e2.getName();
    });

    for (const auto &e : v) {
        std::cout << e.getId() << " : " << e.getName() << " : " << e.getLanguage() << std::endl;
    }

    auto cppCount = std::count_if(v.begin(), v.end(), [](const auto &e) {
        return e.getLanguage() == "C++";
    });
    std::cout << "C++ programmers : " << cppCount << std::endl;

    auto it = std::find_if(v.begin(), v.end(), [](const auto &e) {
        return e.getLanguage() == "Python";
    });
    if (it != v.end()) {
        std::cout << "Python programmer name : " << it->getName() << std::endl;
    } else {
        std::cout << "No Python programmer found" << std::endl;
    }

    it = std::find_if(v.begin(), v.end(), [](const auto &e) {
        return e.getLanguage() == "Java";
    });
    if (it != v.end()) {
        std::cout << "Java Programmer name : " << it->getName() << std::endl;
    } else {
        std::cout << "No Java programmer found" << std::endl;
    }

    std::for_each(v.begin(), v.end(), [](const auto &e) {
        std::cout << e.getName() << std::endl;
    });

    return 0;
}
