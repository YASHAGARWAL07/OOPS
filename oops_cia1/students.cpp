#include <iostream>
using namespace std;

class Student {
private:
    int Roll_No;
    string Name;
    int Marks[3];
    int Total_marks;
    char Grade;

public:

    // Function to take input
    void input() {
        cout << "\nEnter Roll No: ";
        cin >> Roll_No;

        cout << "Enter Name: ";
        cin >> Name;

        cout << "Enter Marks of 3 Courses: ";
        for (int i = 0; i < 3; i++) {
            cin >> Marks[i];
        }
    }

    // Function to calculate total marks and grade
    void calculate() {
        Total_marks = 0;

        for (int i = 0; i < 3; i++) {
            Total_marks += Marks[i];
        }

        if (Total_marks >= 270)
            Grade = 'A';
        else if (Total_marks > 225)
            Grade = 'B';
        else if (Total_marks > 150)
            Grade = 'C';
        else
            Grade = 'D';
    }

    // Function to display student details
    void display() {
        cout << "\n-----------------------------";
        cout << "\nRoll No     : " << Roll_No;
        cout << "\nName        : " << Name;
        cout << "\nMarks       : ";

        for (int i = 0; i < 3; i++) {
            cout << Marks[i] << " ";
        }

        cout << "\nTotal Marks : " << Total_marks;
        cout << "\nGrade       : " << Grade;
        cout << "\n-----------------------------\n";
    }
};

int main() {

    Student students[5];   // Array of 5 objects

    // Input for 5 students
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << i + 1 << endl;
        students[i].input();
        students[i].calculate();
    }

    // Display all students
    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
