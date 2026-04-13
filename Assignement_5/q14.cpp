#include<iostream>
using namespace std;

/*
    Student -> (InternalExam, ExternalExam) → Result
    Demonstrates hybrid inheritance
*/
class Student {
public:
    string name;
};

class InternalExam : public Student {
public:
    int internalMarks;
};

class ExternalExam : public Student {
public:
    int externalMarks;
};

class Result : public InternalExam, public ExternalExam {
public:
    void display() {
        cout << "Internal: " << internalMarks << endl;
        cout << "External: " << externalMarks << endl;
    }
};

int main() {
    Result r;

    // Two Student subobjects -> ambiguity for name
    r.InternalExam::name = "Yash";

    r.internalMarks = 40;
    r.externalMarks = 60;

    r.display();
    return 0;
}