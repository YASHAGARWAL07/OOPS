#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v) {
        value = v;
    }

    void operator++() {
        value++;
    }

    void operator++(int) {
        value++;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Counter c1(5), c2(10), c3(20);

    ++c1;
    c1.display();

    c2++;
    c2.display();

    ++c3;
    c3++;
    c3.display();

    return 0;
}