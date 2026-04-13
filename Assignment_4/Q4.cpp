#include <iostream>
using namespace std;

class Volume {
public:
    // Function to calculate volume of cube
    // Input: side
    // Output: volume of cube
    int volume(int side) {
        return side * side * side;
    }

    // Function to calculate volume of cuboid
    // Input: length, breadth, height
    // Output: volume of cuboid
    int volume(int l, int b, int h) {
        return l * b * h;
    }

    // Function to calculate volume of cylinder
    // Input: radius, height
    // Output: volume of cylinder
    float volume(float r, float h) {
        return 3.14 * r * r * h;
    }
};

int main() {
    Volume v;

    cout << "Cube Volume: " << v.volume(3) << endl;
    cout << "Cuboid Volume: " << v.volume(2, 3, 4) << endl;
    cout << "Cylinder Volume: " << v.volume(2.5f, 5.0f) << endl;

    return 0;
}
