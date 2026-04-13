#include<iostream>
using namespace std;

/*
    Person is inherited twice via Student and Teacher
    → creates TWO copies of Person in TeachingAssistant
*/
class Person {
public:
    string name;
};

class Student : public Person {};
class Teacher : public Person {};

class TeachingAssistant : public Student, public Teacher {};

int main() {
    TeachingAssistant ta;

    // ta.name = "Yash";   // ERROR: ambiguous (two Person subobjects)

    // Disambiguation using scope:
    ta.Student::name = "Yash";
    ta.Teacher::name = "Sir";

    cout << ta.Student::name << endl;
    cout << ta.Teacher::name << endl;

    return 0;
}