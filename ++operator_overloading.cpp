#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    Count(int x)
    {
        value = x;
    }
    void operator ++()
    {
        ++value;
    }
    void display()
    {
        cout << "Count : " << value << endl;
    }
};
int main()
{
    Count c1(5);
    ++c1;
    c1.display();
}
