#include <iostream>
using std::string;

/** Class is the user defined datatypes and it is the building blocks of OOP.
 *  So by defualt, everything (variables and member functions) in the class
 *  are defined as private unless defined explicitly. And if the variables are
 *  private they cannot be accessed directly outside the class.
 *  There are 3 types of access specifier, private, public and protected.
 * 
 *  Constructor rules: 1. No return type (not even void) 
 *                     2. constructor name should be same as class name 
 *                     3. any access specifiers
*/  
class Employee {
public: 
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
        std::cout << std::endl << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl << std::endl;
    }
    
    // Creation of a constructor (no void type, public, same name as class)
    Employee(string name, string company, int age)   { 
        Name = name;
        Company = company;
        Age = age;
    }
};

int main ()
{
    Employee employee1 = Employee("Farooq", "Baxter", 29); // Object creation of class Employee    
    // employee1.Name = "Farooq";
    // employee1.Company = "Baxter";
    // employee1.Age = 29;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Snehil", "UHG", 30);     // Another object of class Employee
    // employee2.Name = "Snehil";
    // employee2.Company = "UnitedHealthGroup";
    // employee2.Age = 30;
    employee2.IntroduceYourself();
    
}