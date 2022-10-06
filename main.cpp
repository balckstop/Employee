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
    
    addEmp(company1,2345,"Laras","Dewantari");
    addEmp(company1,2346,"Aisyah","Syahputri");
    company1.display();
    
    addEmp(company1,2346,"Roni","Fahreza");
}
