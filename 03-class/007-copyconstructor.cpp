#include <iostream>

class Student
{
public:
    Student() : name(""), age(0), id(0) {}

    Student(const Student& s)
    {
        this->name = s.name;
	this->age = s.age;
	this->id = s.id;
    }

    void setName(std::string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setId(int id)
    {
        this->id = id;
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
    Student s1;
    s1.setName("Karthick");
    s1.setAge(20);
    s1.setId(1);
    Student s2(s1);
    s2.setId(2);

    s1.print();
    s2.print();

    return 0;
}
