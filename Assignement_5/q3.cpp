#include<iostream>
using namespace std;

class Engine {
public:
    void display() {
        cout << "Engine details displayed" << endl;
    }
};

class Car : private Engine {
public:
    void show() {
        display();   // accessible inside derived class
    }
};

int main() {
    Car c1;

    // c1.display();   // ERROR: not accessible

    c1.show();        //indirect access
}