#include <iostream>
#include "Employee.h"

Employee::Employee(int ID, std::string firstName, std::string lastName)
    : ID(ID), firstName(firstName), lastName(lastName) {}
    
Employee::Employee(const Employee &e)
    : Employee{e.ID, e.firstName, e.lastName } {}
    
Employee::~Employee() {}    

std::ostream &operator<< (std::ostream &os, const Employee &rhs) {
    os << rhs.ID << ", " << rhs.firstName << ", " << rhs.lastName;
    return os;
}