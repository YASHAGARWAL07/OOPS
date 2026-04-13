#include<iostream>
using namespace std;

/*
    Protected members flow through inheritance chain
*/
class A {
protected:
    int x;
};

class B : public A {
public:
    void setX() {
        x = 10;   // accessible
    }
};

class C : public B {
public:
    void display() {
        cout << x << endl; // still accessible
    }
};

int main() {
    C obj;

    obj.setX();
    obj.display();

    // obj.x; // not accessible in main

    return 0;
}