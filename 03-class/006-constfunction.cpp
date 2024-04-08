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

    std::string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    int getId() const
    {
        return id;
    }

    void print() const
    {
        std::cout << "Name : " << name << std::endl;
	std::cout << "Age  : " << age  << std::endl;
	std::cout << "ID   : " << id   << std::endl;
    }

    void totalStudents()
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
    Student s1;
    s1.setName("Karthick");
    s1.setAge(20);
    s1.setId(1);

    std::cout << s1.getName() << std::endl;
    std::cout << s1.getAge() << std::endl;
    std::cout << s1.getId() << std::endl;

    return 0;
}
