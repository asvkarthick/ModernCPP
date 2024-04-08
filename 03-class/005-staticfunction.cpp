#include <iostream>
#include <string>

class Student
{
public:
    Student()
    {
        ++numStudents;
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

    void print()
    {
        std::cout << "Name : " << name << std::endl;
	std::cout << "Age  : " << age  << std::endl;
	std::cout << "ID   : " << id   << std::endl;
    }

    static void totalStudents()
    {
        std::cout << "Total Students : " << numStudents << std::endl;
    }

    ~Student()
    {
        --numStudents;
    }

    static int numStudents;
    std::string name;
    int age;
    int id;
};

int Student::numStudents = 0;

int main(void)
{
    Student::totalStudents();
    Student s1;

    Student::totalStudents();

    Student s2, s3;

    Student::totalStudents();
    s3.totalStudents(); // Can also be called with objects

    return 0;
}
