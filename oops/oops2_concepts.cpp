/** There are 3 main pillars of Object Oriented Programming. They are:
 *  Encapsulation - The idea of encapsulation is to bind or tie together data and methods that operate on that data so that they are 
 *                  grouped together within a class. But why, because of the purpose of preventing anyone or anything outside of our 
 *                  class to be able to directly access our data and to interact with it and to modify it.
 *  Abstraction   - Hiding complex things behind a procedure that makes those things look simple
 *                  One rule of abstaction is that the class shall have a pure virtual function in order
 *                  to implement the abstract class
 *  Inheritance   - Create a derived/child class from parent/base class. Syntax: class DerivedClassName : ParentClass Name {};
 *                  When you create a child class, the child class will automatically get access of all the variables
 *                  ( public only) included in the parent class. So, we can directly use them inside our child class.
 *                  When you create an object of child class then you will get an error saying "default constructor cannot be reference"
 *                  This error pops up because we dont have a default constructor in our child class. Since the parent class where
 *                  this class got inherited from contains a default constructor. So we need to create a constructor for our child class
 *                  too. 
 *                  To create a defualt constructor 3 rules again: no return type, name of constructor same as class and the same access
 *                  specifier.
 *                  If we are using the same parameters from the parent class constructor pass the same parameter in the child class
 *                  constructor have and your parameter after that.
 *                
 *                  Syntax to create a child class constructor:
 * `                childclassName (parentClassConstructorParameters, derivedClassParameters) :  parentclassName (parentClassConstructorParameters)
 *                  {};
 *                  By default, the member variables in the base class are private. So, we need to provide the public access specifier 
 *                  when creating inherited class. 
 *
 *  Polymorphism  -
 * 
 *  Constructors  - A constructor is a special member function of a class that is automatically called when an object of that class is
 *                  created. It has the same name as the class and is used to initialize object's data members.    
 */
#include <iostream>
using std::string;

class AbstractEmployee { // This class is created to show how abstraction works
    virtual void AskforPromotion() = 0; // virtual function declaration/initialization
};

class Employee : AbstractEmployee { // Abstracted class interface with Employee class.
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name) { // These are the encapsulation example; Name is encapsulated in these methods
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18)
            Age = age;
    }
    int getAge() {
        return Age;
    }
    void IntroduceYourself() {
        std::cout << std::endl << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl << std::endl;
    }
    
    // Constructor Employee, no return type, name as class name and inside access specifiers 
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    } 
    
    // Virtual function definition for abstracted class
    void AskforPromotion() { 
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << " sorry, NO PROMOTION for you!" << std::endl;
    }
};

// Derived class Developer derived from base/parent class Employee
class Developer : public Employee { 
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee (name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug() {
        std::cout << getName() << " fixed bug using" << FavProgrammingLanguage << std::endl;
        std::cout << Name << " fixed bug using" << FavProgrammingLanguage << std::endl; // this is to show how we can get access to Name
    }
};

// Driver code
int main()
{
    Employee employee1 = Employee("Farooq", "Baxter", 29); // Constructor
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Snehil", "UHG", 30); // Constructor
    employee2.IntroduceYourself(); 

    employee1.setAge(15);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl
              << std::endl;
    
    employee1.AskforPromotion();
    employee2.AskforPromotion();

    Developer d = Developer("Farooq", "Baxter", 29, "C++"); // Object created using constructor
    d.FixBug();
    // d.getName(); // Cannot access directly it has to be through a method in the class.
    // To gain access protected access specifier is created.
    d.AskforPromotion();
}