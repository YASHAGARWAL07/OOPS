#include<iostream>
using namespace std;

/*
    Class A (Base Class)

    Constructor:
    - Called first when object is created

    Destructor:
    - Called last when object is destroyed
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
    - Called after A's constructor

    Destructor:
    - Called before A's destructor
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
    - Called last in chain

    Destructor:
    - Called first during destruction
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
        - Constructor order: A → B → C
        - Destructor order: C → B → A
    */
    C obj;

    return 0;
}