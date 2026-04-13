#include <iostream>
using namespace std;

class Sum {
public:
    // Function to add two integers
    // Input: two integers
    // Output: sum
    int sum(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    // Input: three integers
    // Output: sum
    int sum(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two float numbers
    // Input: two float values
    // Output: sum
    float sum(float a, float b) {
        return a + b;
    }
};

int main() {
    Sum s;

    cout << "Sum (2 integers): " << s.sum(10, 20) << endl;
    cout << "Sum (3 integers): " << s.sum(1, 2, 3) << endl;
    cout << "Sum (floats): " << s.sum(2.5f, 3.5f) << endl;

    return 0;
}
