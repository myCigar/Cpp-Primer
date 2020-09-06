#include <string>
#include <iostream>

class Employee {
public:
    Employee() : name("default"), num(num_generator++) { }
    Employee(const std::string &_name) : name(_name), num(num_generator++) { }
    Employee(const Employee &copy_employee) : name(copy_employee.name), num(copy_employee.num) { }
    static int num_generator;
    void print() { std::cout << name << ": " << num << std::endl; }
private:
    std::string name;
    int num;
};

int Employee::num_generator = 10000;

int main()
{
    Employee employee1;
    Employee employee2("Tony");

    employee1.print();
    employee2.print();

    return 0;
}