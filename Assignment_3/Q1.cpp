#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance(int m, int c) {
        meters = m;
        centimeters = c;
    }

    Distance operator-(Distance d) {
        Distance temp(0, 0);

        int total1 = meters * 100 + centimeters;
        int total2 = d.meters * 100 + d.centimeters;

        int result = total1 - total2;

        temp.meters = result / 100;
        temp.centimeters = result % 100;

        return temp;
    }

    void display() {
        cout << meters << " m " << centimeters << " cm" << endl;
    }
};

int main() {
    Distance d1(5, 80), d2(3, 50);
    Distance d3 = d1 - d2;

    Distance d4(10, 20), d5(4, 70);
    Distance d6 = d4 - d5;

    Distance d7(8, 0), d8(2, 90);
    Distance d9 = d7 - d8;

    d3.display();
    d6.display();
    d9.display();

    return 0;
}
