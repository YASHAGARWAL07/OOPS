#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    friend ostream& operator<<(ostream& out, Time t) {
        out << t.hours << " hours " << t.minutes << " minutes";
        return out;
    }
};

int main() {
    Time t1(10, 25);
    Time t2(5, 45);
    Time t3(2, 10);

    cout << t1 << endl;
    cout << t2 << endl;
    cout << t3 << endl;

    return 0;
} 