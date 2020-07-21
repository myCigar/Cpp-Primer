#include <iostream>
#include <string>

struct Person {
    std::string name;
    std::string address;

    Person() = default;
    Person(const std::string &n, const std::string &addr) : name(n), address(addr) { }; 
};

