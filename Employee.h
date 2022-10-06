#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>

class Employee {
    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
    
    private:
    int ID;
    std::string firstName;
    std::string lastName;
    
    public:
    Employee(int ID, std::string firstName, std::string lastName);
    Employee(const Employee &e);
    ~Employee();
    
    void setID(int ID) { this -> ID = ID; } 
    int getID() const { return ID; }
    
    void setFirstName(std::string firstName) { this -> firstName = firstName; }
    std::string getFirstName() const { return firstName; }
    
    void setLastName(std::string lastName) { this -> lastName = lastName; }
    std::string getLastName() { return lastName; }
};

#endif