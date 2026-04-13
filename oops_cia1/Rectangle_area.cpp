#include <iostream>
using namespace std;

class Rectangle {
    private :
    int length;
    int width;
    int area;

    public:
    Rectangle(int l , int w){
        length = l;
        width = w;
        cout<<endl<<"Rectangle of length : "<<length<<" and width : "<<width<<" created successfully!"<<endl;
    }

    int cal_area(){
        return area = length * width;
    }
};

int main(){
    Rectangle A1(4,8);
    cout<<"The area is : "<<A1.cal_area()<<endl;
    return 0;
}
