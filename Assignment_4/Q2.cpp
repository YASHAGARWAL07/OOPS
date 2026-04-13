#include <iostream>
using namespace std;

class Max {
public:
    // Function to find max of two integers
    // Input: two integers
    // Output: maximum value
    int maxValue(int a, int b) {
        return (a > b) ? a : b;
    }

    // Function to find max of three integers
    // Input: three integers
    // Output: maximum value
    int maxValue(int a, int b, int c) {
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }

    // Function to find max of two double values
    // Input: two double numbers
    // Output: maximum value
    double maxValue(double a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Max m;

    cout << "Max (2 numbers): " << m.maxValue(10, 20) << endl;
    cout << "Max (3 numbers): " << m.maxValue(10, 20, 30) << endl;
    cout << "Max (double): " << m.maxValue(5.5, 9.2) << endl;

    return 0;
}
