#include<iostream>
using namespace std;

/*
    Base Class 1: Developer

    Function:
    - writeCode()
      Input: No input
      Work: Prints coding-related task
      Output: "Writing code..."
*/
class Developer {
public:
    void writeCode() {
        cout << "Writing code..." << endl;
    }
};

/*
    Base Class 2: Designer

    Function:
    - drawUI()
      Input: No input
      Work: Prints UI designing task
      Output: "Designing UI..."
*/
class Designer {
public:
    void drawUI() {
        cout << "Designing UI..." << endl;
    }
};

/*
    Derived Class: UIUXDeveloper (Multiple Inheritance)

    Inherits:
    - Developer
    - Designer

    Function:
    - showWork()
      Work: Calls both base class methods
*/
class UIUXDeveloper : public Developer, public Designer {
public:
    void showWork() {
        writeCode();   // from Developer
        drawUI();      // from Designer
    }
};

int main() {

    /*
        Creating object of UIUXDeveloper

        Working:
        - Accesses methods from both base classes

        Expected Output:
        Writing code...
        Designing UI...
    */
    UIUXDeveloper obj;

    obj.showWork();

    return 0;
}