#include<iostream>
using namespace std;

/*
    Base Class: Shape

    Data Member:
    - color → stores color of shape (Input: string)

    Constructor:
    - Input: color value
    - Work: Initializes color
*/
class Shape {
public:
    string color;

    Shape(string c) {
        color = c;
    }
};

/*
    Derived Class: Circle (inherits Shape)

    Data Member:
    - radius → stores radius of circle (Input: float)

    Constructor:
    - Input: color and radius
    - Work:
        1. Passes color to Shape constructor
        2. Initializes radius

    Function:
    - display()
      Output: Prints color and radius
*/
class Circle : public Shape {
public:
    float radius;

    // Constructor chaining
    Circle(string c, float r) : Shape(c) {
        radius = r;
    }

    void display() {
        cout << "Color : " << color << endl;
        cout << "Radius : " << radius << endl;
    }
};

int main() {

    /*
        Creating object of Circle

        Input:
        - color = "Red"
        - radius = 5

        Working:
        - Circle constructor calls Shape constructor
        - Initializes both color and radius

        Expected Output:
        Color : Red
        Radius : 5
    */
    Circle c1("Red", 5);
    c1.display();

    return 0;
}