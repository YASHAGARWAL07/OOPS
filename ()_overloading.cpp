#include <iostream>
using namespace std;
class par
{
private:
    int value;

public:
    par(int v)
    {
        value = v;
    }
    par operator()(par obj)
    {
        par temp(0);
        temp.value = value + obj.value;
        // temp.value = value + 5;
        return temp;
    }
    void display()
    {
        cout << "value : " << value;
    }
};
int main()
{
    par n1(10), n2(20);
    par n3 = n1(n2);
    n3.display();
}


