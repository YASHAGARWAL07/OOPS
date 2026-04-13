#include<iostream>
using namespace std;

/*
    Base Class: Employee
    Data Member:
    - salary (protected)
      → Input: float value (entered by user)
      → Protected means it cannot be accessed directly outside the class,
        but can be accessed inside derived classes.
*/
class Employee {
protected:
    float salary;
};

/*
    Derived Class: Manager (public inheritance)

    Functions:
    
    1. salary_val()
       - Input: Takes salary from user using cin
       - Work: Stores value in inherited protected variable 'salary'

    2. display_salary()
       - Input: No input
       - Work: Prints the salary stored in 'salary'
       - Output: Displays salary
*/
class Manager : public Employee {
public:
    void salary_val() {
        cout << "Enter salary amount : ";
        cin >> salary;   // accessing protected member
    }

    void display_salary() {
        cout << "Salary is : " << salary << endl;
    }
};

int main() {

    /*
        Creating object of Manager class

        Flow:
        1. Takes salary input from user
        2. Displays the entered salary

        Expected Output (example):
        Enter salary amount : 50000
        Salary is : 50000
    */
    Manager m1;
    m1.salary_val();
    m1.display_salary();

    return 0;
}