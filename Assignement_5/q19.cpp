#include<iostream>
using namespace std;

class Media {
public:
    string title;
    int id;
};

class Book : public Media {
public:
    string author;
};

class DVD : public Media {
public:
    int playtime;
};

class HardcoverBook : public Book {
public:
    void display() {
        cout << title << " " << author << endl;
    }
};

int main() {
    HardcoverBook h;
    h.title = "C++";
    h.author = "Bjarne";

    h.display();
    return 0;
}