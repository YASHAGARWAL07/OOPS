#include<iostream>
#include<fstream>
using namespace std;

class Student{
public:
    int id;
    string name;

    void serialize(ofstream &out)
    {
        out << id << endl;
        out << name << endl;
    }

    void deserialize(ifstream &in)
    {
        in >> id;
        in.ignore();
        getline(in, name);
    }
};

int main(){
    Student s1;
    s1.id = 101;
    s1.name = "Priya";

    ofstream outfile("Student.txt");
    s1.serialize(outfile);
    outfile.close();

    Student s2;
    ifstream infile("Student.txt");
    s2.deserialize(infile);
    infile.close();

    cout << "ID: " << s2.id << endl;
    cout << "Name: " << s2.name << endl;

    return 0;
}