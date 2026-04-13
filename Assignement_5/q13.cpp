#include<iostream>
using namespace std;

/*
    Virtual inheritance ensures ONE shared Person subobject
*/
class Person {
public:
    string name;
};

class Student : virtual public Person {};
class Teacher : virtual public Person {};

class TeachingAssistant : public Student, public Teacher {};

int main() {
    TeachingAssistant ta;

    ta.name = "Yash";   // no ambiguity

    cout << ta.name << endl;

    return 0;
}