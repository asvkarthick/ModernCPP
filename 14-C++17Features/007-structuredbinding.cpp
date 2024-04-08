#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age;
};

int main(void)
{
    Student s{"Karthick", 20};

    auto [name, age] = s;

    std::cout << name << " : " << age << std::endl;

    return 0;
}
