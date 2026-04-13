#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    long long price;

public:
    void input() {
        cin.ignore();
        cout << "Enter Brand: ";
        getline(cin, brand);
        cout << "Enter Model: ";
        getline(cin, model);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    Car cars[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for Car " << i + 1 << endl;
        cars[i].input();
    }

    cout << "\n--- Car Details ---\n";

    for (int i = 0; i < 3; i++) {
        cars[i].display();
    }

    return 0;
}
