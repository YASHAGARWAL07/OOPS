#include<iostream>
using namespace std;

/*
    public → private
    protected → private
*/
class Base {
public:
    int a = 10;
protected:
    int b = 20;
private:
    int c = 30;
};

class Derived : private Base {
public:
    void show() {
        cout << a << endl; // accessible
        cout << b << endl; // accessible
    }
};

int main() {
    Derived d;

    // d.a; // not accessible in main

    return 0;
}