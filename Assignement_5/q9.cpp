#include<iostream>
using namespace std;

/*
    Class A (Base Class)

    Constructor:
    - Executes first when object is created

    Destructor:
    - Executes last when object is destroyed
*/
class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }

    ~A() {
        cout << "Destructor of A" << endl;
    }
};

/*
    Class B (Derived from A)

    Constructor:
    - Executes after A's constructor

    Destructor:
    - Executes before A's destructor
*/
class B : public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }

    ~B() {
        cout << "Destructor of B" << endl;
    }
};

/*
    Class C (Derived from B)

    Constructor:
    - Executes last in the hierarchy

    Destructor:
    - Executes first during destruction
*/
class C : public B {
public:
    C() {
        cout << "Constructor of C" << endl;
    }

    ~C() {
        cout << "Destructor of C" << endl;
    }
};

int main() {

    /*
        Creating object of class C

        Working:
        1. Constructors are called from base → derived
           Order: A → B → C

        2. Destructors are called in reverse order
           Order: C → B → A
    */
    C obj;

    return 0;
}
