#include<iostream>
using namespace std;

/*
    public -> protected
    protected -> protected
    private -> not accessible
*/
class Base {
public:
    int a = 10;
protected:
    int b = 20;
private:
    int c = 30;
};

class Derived : protected Base {
public:
    void show() {
        cout << a << endl; // accessible
        cout << b << endl; // accessible
        // cout << c;      // not accessible
    }
};

int main() {
    Derived d;

    // d.a; // not accessible in main
    // d.b; // not accessible in main

    return 0;
}