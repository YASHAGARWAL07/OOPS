#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    int marks;

public:
    Student(int r, int m) {
        rollNo = r;
        marks = m;
    }

    bool operator==(Student s) {
        return marks == s.marks;
    }
};

int main() {
    Student s1(1, 90), s2(2, 90);
    Student s3(3, 85), s4(4, 80);
    Student s5(5, 70), s6(6, 70);

    if (s1 == s2) cout << "Case 1: Equal\n"; else cout << "Case 1: Not Equal\n";
    if (s3 == s4) cout << "Case 2: Equal\n"; else cout << "Case 2: Not Equal\n";
    if (s5 == s6) cout << "Case 3: Equal\n"; else cout << "Case 3: Not Equal\n";

    return 0;
}
