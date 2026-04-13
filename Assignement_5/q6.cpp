#include<iostream>
using namespace std;

/*
    Base Class: Grandfather

    Data Member:
    - name → stores name (Input: string)

    Function:
    - getName()
      Input: takes name from user
      Work: stores value in name

    - displayName()
      Output: prints name
*/
class Grandfather {
public:
    string name;

    void getName() {
        cout << "Enter Grandfather's Name: ";
        cin >> name;
    }

    void displayName() {
        cout << "Grandfather Name: " << name << endl;
    }
};

/*
    Derived Class: Father (inherits Grandfather)

    Data Member:
    - job → stores profession (Input: string)

    Functions:
    - getJob() → takes job input
    - displayJob() → prints job
*/
class Father : public Grandfather {
public:
    string job;

    void getJob() {
        cout << "Enter Father's Job: ";
        cin >> job;
    }

    void displayJob() {
        cout << "Father's Job: " << job << endl;
    }
};

/*
    Derived Class: Son (inherits Father)

    Data Member:
    - school → stores school name (Input: string)

    Functions:
    - getSchool() → takes school input
    - displaySchool() → prints school
*/
class Son : public Father {
public:
    string school;

    void getSchool() {
        cout << "Enter Son's School: ";
        cin >> school;
    }

    void displaySchool() {
        cout << "Son's School: " << school << endl;
    }
};

int main() {

    /*
        Creating object of Son

        Working:
        - Son inherits Father
        - Father inherits Grandfather
        - So Son can access all properties

        Input Example:
        Name: Ram
        Job: Engineer
        School: DPS

        Expected Output:
        Grandfather Name: Ram
        Father's Job: Engineer
        Son's School: DPS
    */
    Son s1;

    s1.getName();      // from Grandfather
    s1.getJob();       // from Father
    s1.getSchool();    // from Son

    cout << endl;

    s1.displayName();
    s1.displayJob();
    s1.displaySchool();

    return 0;
}