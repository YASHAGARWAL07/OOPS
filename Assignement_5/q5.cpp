#include<iostream>
using namespace std;

/*
    Base Class: Bird

    Function:
    - fly()
      Input: No input
      Work: Prints that bird can fly
      Output: "Bird can fly"
*/
class Bird {
public:
    void fly() {
        cout << "Bird can fly" << endl;
    }
};

/*
    Derived Class: Penguin (inherits Bird)

    Function:
    - fly()  → OVERRIDDEN function
      Input: No input
      Work: Redefines base class function behavior
      Output: "I cannot fly."
*/
class Penguin : public Bird {
public:
    void fly() {
        cout << "I cannot fly." << endl;
    }
};

int main() {

    /*
        Creating object of Penguin

        Working:
        - Calls overridden fly() of Penguin class

        Expected Output:
        I cannot fly.
    */
    Penguin p1;
    p1.fly();

    return 0;
}