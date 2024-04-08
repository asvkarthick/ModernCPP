#include <iostream>
#include <memory>
#include <string>

class Project
{
    std::string name;
public:
    void setProjectName(std::string &name)
    {
        this->name = name;
    }

    void printName() const
    {
        std::cout << "Project: " << name << std::endl;
    }
};

class Employee
{
    std::shared_ptr<Project> prj;
public:
    void setProject(std::shared_ptr<Project> prj)
    {
        this->prj = prj;
    }

    void printProject() const
    {
        prj->printName();
    }
};

int main(void)
{
    std::string projectName("Computer Vision");
    std::shared_ptr<Project> prj = std::make_shared<Project>();
    std::unique_ptr<Employee> emp1 = std::make_unique<Employee>();
    std::unique_ptr<Employee> emp2 = std::make_unique<Employee>();
    std::unique_ptr<Employee> emp3 = std::make_unique<Employee>();
    emp1->setProject(prj);
    emp2->setProject(prj);
    emp3->setProject(prj);
    prj->setProjectName(projectName);

    emp1->printProject();
    emp2->printProject();
    emp3->printProject();
    prj->printName();

    std::cout << "Number of shared ptr (prj) references : " << prj.use_count() << std::endl;

    return 0;
}
