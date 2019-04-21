#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include<string>

class Employee
{
public:
    Employee(const std::string&,const std::string&,
             const std::string&);
    virtual~Employee(){}

    void setFirstName(const std::string&);
    std::string getFirstName()const;

    void setLastName(const std::string&);
    std::string getLastName()const;

    void setSocialSecurityNumber(const std::string&);
    std::string getSocialSecurity()const;

    virtual double earnings()const=0;
    virtual double print()const;
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;

};


#endif // EMPLOYEE_H_INCLUDED
