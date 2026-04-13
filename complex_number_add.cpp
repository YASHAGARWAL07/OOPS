#include<iostream>
using namespace std;
class Complex{

    private:
    int real;
    int img;

    public:
    Complex (int r,int i){
        real = r;
        img = i;
    }
    Complex operator + (Complex obj){
            Complex temp(0,0);
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
    }
    void display(){
        cout<<"ans : " << real<<" + "<<img<<"i"<<endl;
    }
    
};
int main(){
    Complex n1(5,6);
    Complex n2(6,7);
    Complex n3 = n1 + n2;
    n3.display();
    return 0;
}
