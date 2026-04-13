#include <iostream>
using namespace std;

class Area {
public:
    // Function to calculate area of square
    // Input: side
    // Output: area of square
    int area(int side) {
        return side * side;
    }

    // Function to calculate area of rectangle
    // Input: length, breadth
    // Output: area of rectangle
    int area(int length, int breadth) {
        return length * breadth;
    }

    // Function to calculate area of circle
    // Input: radius
    // Output: area of circle
    float area(float radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;

    cout << "Square Area: " << a.area(5) << endl;
    cout << "Rectangle Area: " << a.area(4, 6) << endl;
    cout << "Circle Area: " << a.area(3.5f) << endl;

    return 0;
}