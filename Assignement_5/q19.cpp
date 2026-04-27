#include <iostream>
using namespace std;

// Base Class
class Media {
protected:
    string title;
    string id;

public:
    Media(string t, string i) {
        title = t;
        id = i;
    }

    void displayMedia() {
        cout << "Title: " << title << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived Class: Book
class Book : public Media {
protected:
    string author;

public:
    Book(string t, string i, string a) : Media(t, i) {
        author = a;
    }

    void displayBook() {
        displayMedia();
        cout << "Author: " << author << endl;
    }
};

// Derived Class: DVD
class DVD : public Media {
private:
    int playtime;

public:
    DVD(string t, string i, int p) : Media(t, i) {
        playtime = p;
    }

    void displayDVD() {
        displayMedia();
        cout << "Playtime: " << playtime << " minutes" << endl;
    }
};

// Derived Class: HardcoverBook
class HardcoverBook : public Book {
private:
    float weight;

public:
    HardcoverBook(string t, string i, string a, float w)
        : Book(t, i, a) {
        weight = w;
    }

    void displayHardcover() {
        cout << "Hardcover Book Details:" << endl;
        displayBook();
        cout << "Weight: " << weight << " kg" << endl;
    }
};

// Main Function
int main() {
    HardcoverBook hb("Harry Potter", "B001", "J.K. Rowling", 0.5);
    DVD dvd("Inception", "D001", 148);

    hb.displayHardcover();

    cout << endl;

    cout << "DVD Details:" << endl;
    dvd.displayDVD();

    return 0;
}