#include <iostream>
#include "Company.h"

Company::Company() {}

Company::~Company() {}

bool Company::addEmployee(int ID, std::string firstName, std::string lastName) {
    for (const Employee &e: empList) {
        if ( e.getID() == ID) {
            return false;
        }
    }
    Employee temp{ID,firstName,lastName};
    empList.push_back(temp);
    return true;
}

void Company::display() const {
    if (empList.size() == 0) {
        std::cout << "There is no employee in the list" << std::endl;
    } else {
        std::cout << "\n==================================" << std::endl;
        for (const auto &e : empList) {
            std::cout << e << std::endl;
        }
        std::cout << "\n==================================" << std::endl;
    }
}
