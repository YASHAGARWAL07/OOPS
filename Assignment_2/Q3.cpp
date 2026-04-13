#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    double basicSalary;
    double netSalary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        netSalary = basicSalary + (0.20 * basicSalary);
    }

    void display() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nNet Salary: " << netSalary << endl;
    }
};

int main() {
    Employee e;

    e.input();
    e.calculateSalary();
    e.display();

    return 0;
}