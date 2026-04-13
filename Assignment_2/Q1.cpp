#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string rollNo;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "\nEnter details for Student 1:\n";
    s1.input();

    cout << "\nEnter details for Student 2:\n";
    s2.input();

    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();

    return 0;
}