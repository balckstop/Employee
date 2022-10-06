#include <iostream>
#include "Company.h"

void addEmp(Company &company, int ID, std::string firstName, std::string lastName) {
    if (company.addEmployee(ID,firstName,lastName)) {
        std::cout << ID << " is added" << std::endl;
    } else {
        std::cout << ID << " has already exist" << std::endl;
    }
}

int main()
{
    Company company1;
    company1.display();
    
    addEmp(company1,2345,"Haris","John");
    addEmp(company1,2346,"Hawbert","Nicholas");
    company1.display();
    
    addEmp(company1,2346,"Nico","Faraday");
}
