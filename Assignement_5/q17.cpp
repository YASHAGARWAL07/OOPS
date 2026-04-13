#include<iostream>
using namespace std;

/*
    Abstract base class: cannot be instantiated
*/
class Animal {
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.makeSound();
    c.makeSound();

    return 0;
}