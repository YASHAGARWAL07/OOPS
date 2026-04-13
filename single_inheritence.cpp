#include<iostream>
using namespace std;
class vehicle {
    public :
    vehicle(){
        cout<<"This is vehicle\n";
    }
};
class car : public vehicle{
    public: 
    car(){
        cout<<"This is a car\n";
    }
};
int main(){
    car obj;
    vehicle obj2;
    return 0;
}
