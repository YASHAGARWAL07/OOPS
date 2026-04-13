#include<iostream>
using namespace std;

class vehicle{
    public :
    vehicle(){
    cout<<"This is a vehicle\n";
    }
};
class fourWheeler : public vehicle{
    public:
    fourWheeler(){
        cout<<"4 wheeler vehicle\n";
    }
};
class car : public fourWheeler{
    public:
    car(){
        cout<<"This is a car\n";
    }
};
int main(){
     car obj;
     return 0;
}
