#include<iostream>
using namespace std;

/*
    Base Class: Vehicle
    Data Members:
    - fuel_type  → stores type of fuel (Input: Petrol/Diesel etc.)
    - max_speed  → stores maximum speed of vehicle (Input: integer)
*/
class Vehicle {
public:
    string fuel_type;
    int max_speed;
};

/*
    Derived Class: Car (inherits Vehicle publicly)

    Additional Data Member:
    - number_of_doors → stores number of doors in car (Input: integer)

    Function: display()
    - Input: No direct input (uses object data members)
    - Work: Prints all details of the car (inherited + own)
    - Output: Displays fuel type, max speed, and number of doors
*/
class Car : public Vehicle {
public:
    int number_of_doors;

    void display() {
        cout << "Fuel_type : " << fuel_type << endl;
        cout << "Max_speed : " << max_speed << endl;
        cout << "Number_of_doors : " << number_of_doors << endl;
    }
};

int main() {

    /*
        Creating object c1 of class Car

        Input values assigned:
        - fuel_type = "Petrol"
        - max_speed = 50
        - number_of_doors = 4
    */
    Car c1;
    c1.fuel_type = "Petrol";
    c1.max_speed = 50;
    c1.number_of_doors = 4;

    /*
        Function Call:
        - Calls display() function
        - Work: Prints all values stored in object

        Expected Output:
        Fuel_type : Petrol
        Max_speed : 50
        Number_of_doors : 4
    */
    c1.display();

    return 0;
}