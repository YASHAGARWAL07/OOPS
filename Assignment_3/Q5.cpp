#include <iostream>
using namespace std;

class Matrix {
private:
    int a[2][2];

public:
    Matrix(int x, int y, int z, int w) {
        a[0][0] = x;
        a[0][1] = y;
        a[1][0] = z;
        a[1][1] = w;
    }

    Matrix operator+(Matrix m) {
        Matrix temp(0,0,0,0);

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];

        return temp;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(1,2,3,4), m2(5,6,7,8);
    Matrix m3 = m1 + m2;

    cout << "Case 1:\n";
    cout << "Matrix 1:\n";
    m1.display();
    cout << "Matrix 2:\n";
    m2.display();
    cout << "Result:\n";
    m3.display();
    cout << endl;

    Matrix m4(2,2,2,2), m5(1,1,1,1);
    Matrix m6 = m4 + m5;

    cout << "Case 2:\n";
    cout << "Matrix 1:\n";
    m4.display();
    cout << "Matrix 2:\n";
    m5.display();
    cout << "Result:\n";
    m6.display();
    cout << endl;

    Matrix m7(9,8,7,6), m8(1,2,3,4);
    Matrix m9 = m7 + m8;

    cout << "Case 3:\n";
    cout << "Matrix 1:\n";
    m7.display();
    cout << "Matrix 2:\n";
    m8.display();
    cout << "Result:\n";
    m9.display();

    return 0;
}
