#include <iostream>
#include <string>

struct Person {
    std::string name;
    std::string address;

    std::string getName() const;
    std::string getAddress() const;
};

std::string Person::getName() const
{
    return name;
}

std::string Person::getAddress() const
{
    return address;
}

std::istream& read(std::istream &cin, Person &item)
{
    return cin >> item.name >> item.address;
}

std::ostream& print(std::ostream &cout, const Person &item)
{
    cout << "Name : " << item.name << std::endl
         << "Address : " << item.address << std::endl;

    return cout;
}