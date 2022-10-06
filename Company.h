#ifndef _COMPANY_H_
#define _COMPANY_H_
#include <vector>
#include <string>
#include "Employee.h"

class Company {
    private:
    std::vector<Employee> empList;
    public:
    Company();
    ~Company();
    bool addEmployee(int ID, std::string firstName, std::string lastName);
    void display() const;
};

#endif