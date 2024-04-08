#include <iostream>
#include <string>

class Student
{
public:
    void setName(std::string s)
    {
        name = s;
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
	std::cout << "Age  : " << age << std::endl;
	std::cout << "ID   : " << id << std::endl;
    }
private:
    std::string name;
    int age;
    int id;
};

int main(void)
{
    Student s;

    s.setName("Karthick");
    s.setAge(20);
    s.setId(1);
    s.print();

    return 0;
}
