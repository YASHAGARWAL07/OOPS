#include <iostream>
using namespace std;

class Result {
private:
    string rollNo;
    int marks1, marks2, marks3;
    int total;
    float average;
    string grade;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks 1: ";
        cin >> marks1;
        cout << "Enter Marks 2: ";
        cin >> marks2;
        cout << "Enter Marks 3: ";
        cin >> marks3;
    }

    void calculate() {
        total = marks1 + marks2 + marks3;
        average = total / 3.0;

        if (average >= 75)
            grade = "Distinction";
        else if (average >= 60)
            grade = "First Division";
        else if (average >= 50)
            grade = "Second Division";
        else
            grade = "Fail";
    }

    void display() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nTotal: " << total;
        cout << "\nAverage: " << average;
        cout << "\nGrade: " << grade << endl;
    }
};

int main() {
    Result r;

    r.input();
    r.calculate();
    r.display();

    return 0;
}
