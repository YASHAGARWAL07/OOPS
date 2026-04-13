#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex obj)
    {
        Complex temp(0,0);
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display()
    {
        cout << "Complex Number : " << real << " + " << imag << "i";
    }
};

int main()
{
    Complex c1(2,3), c2(4,5);

    Complex c3 = c1 + c2;

    c3.display();
}