#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle\n";
    }
};

class fare{
    public :
    fare(){
        cout<<"fare of the vehicle is \n";
    }
};
class car{
    public:
    car(){
        cout<<"This is a car\n";
    }
};
class Bus : public vehicle, public fare {
    public:
    Bus(){
        cout<<"This is a Bus with fare :\n";
    }
};
int main(){
    Bus obj;
    return 0;

}