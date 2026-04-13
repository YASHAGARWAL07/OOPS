#include<iostream>
using namespace std;

class landVehicle{
    public :
    landVehicle(){
        cout<<"landVehicle is called\n";
    }
    void landInfo(){
        cout<<"this is a land vehicle\n";
    }
};
class waterVehicle{
    public:
    waterVehicle(){
        cout<<"waterVechicle is called\n";
    }
    void waterInfo(){
        cout<<"This is a water vehicle\n";
    }
};
class AmphibiousVehicle : public waterVehicle, public landVehicle{      //class which is written first , that constructor will be called first
    public:
    AmphibiousVehicle(){
        cout<<"This is an amphibiousVechicle\n";
    }
};
int main(){
    AmphibiousVehicle obj;
    obj.waterInfo();
    obj.landInfo();
    return 0;
}