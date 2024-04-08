#include <iostream>
#include <string>

class Student
{
public:
    Student() = delete;

    Student(int id)
    {
        this->id = id;
    }

    Student(Student &&s)
    {
        std::cout << "Move constructor called" << std::endl;
        this->name = std::move(s.name);
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
        this->id  =id;
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
    s1.setName("Karthick");
    s1.setAge(20);

    Student s2 = std::move(s1);
    s2.print();

    return 0;
}
