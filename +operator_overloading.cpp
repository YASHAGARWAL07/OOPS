#include <iostream>
using namespace std;
class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }
    Number operator+(Number obj)
    {
        Number temp(0);
        temp.value = value + obj.value;
        //temp.value = value + 5;
        return temp;
    }
    void display()
    {
        cout << "value : " << value;
    }
};
int main()
{
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    n3.display();
}
