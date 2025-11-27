#include<iostream>
#include<fstream>
#include<string>
// #include<typeinfo>
using namespace std;
struct Student {
    string name;
    int roll;
};
int main(){
    Student s;
    s.name = "Fizaan";
    s.roll = 555;
    fstream file("open.dat", ios::out|ios::in|ios::binary|ios::trunc);
    file.write((char*)&s, sizeof(Student));
    file.seekp(0);
    Student sr;
    file.read((char*)&sr, sizeof(Student));
    cout << sr.name << endl;
    cout << sr.roll << endl;
    
    return 0;
}