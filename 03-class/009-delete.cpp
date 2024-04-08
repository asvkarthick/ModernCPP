#include <iostream>
#include <string>

class Student
{
public:
    Student() = delete; // Now one cannot create object without parameter

    Student(int i) : id(i) {}

    void setName(std::string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void print() const
    {
        std::cout << "Name : " << name << std::endl;
	std::cout << "Age  : " << age  << std::endl;
	std::cout << "ID   : " << id   << std::endl;
    }

private:
    std::string name;
    int age;
    int id;
};

int main(void)
{
    Student s1(1);
    Student s2(2);

    s1.setName("Karthick");
    s1.setAge(20);
    s2.setName("Kumaran");
    s2.setAge(20);

    s1.print();
    s2.print();

    return 0;
}
