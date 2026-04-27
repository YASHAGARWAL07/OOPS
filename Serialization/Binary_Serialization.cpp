#include<iostream>
#include<fstream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void serialize(ofstream &out) {
        // write id
        out.write((char*)&id, sizeof(id));

        // write string length
        size_t length = name.size();
        out.write((char*)&length, sizeof(length));

        // write string characters
        out.write(name.c_str(), length);
    }

    void deserialize(ifstream &in) {
        // read id
        in.read((char*)&id, sizeof(id));

        // read string length
        size_t length;
        in.read((char*)&length, sizeof(length));

        // read string characters
        char *buffer = new char[length + 1];
        in.read(buffer, length);
        buffer[length] = '\0';

        name = buffer;
        delete[] buffer;
    }
};

int main() {
    Student s1;
    s1.id = 101;
    s1.name = "Priya";

    // write binary
    ofstream out("student.bin", ios::binary);
    s1.serialize(out);
    out.close();

    Student s2;

    // read binary
    ifstream in("student.bin", ios::binary);
    s2.deserialize(in);
    in.close();

    cout << "ID: " << s2.id << endl;
    cout << "Name: " << s2.name << endl;

    return 0;
}