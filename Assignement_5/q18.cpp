#include<iostream>
using namespace std;

/*
    Base class with virtual function
*/
class Employee {
public:
    virtual void calculatePay() = 0;
};

class FullTimeEmployee : public Employee {
public:
    float salary = 50000;

    void calculatePay() {
        cout << "Monthly Salary: " << salary << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    int hours = 20;
    float rate = 200;

    void calculatePay() {
        cout << "Monthly Pay: " << hours * rate << endl;
    }
};

int main() {
    Employee* e1;
    FullTimeEmployee f;
    PartTimeEmployee p;

    e1 = &f;
    e1->calculatePay();

    e1 = &p;
    e1->calculatePay();

    return 0;
}