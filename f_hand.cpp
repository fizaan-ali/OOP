#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream file("data.txt", ios::in | ios:: out | ios:: trunc); // trunc means if file is not there then create it
    if(!file){
        cout << "Error opening file!" << endl;
    }
    string name;
    int rollno;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rollno;
    file << name << " | " << rollno;
    file.seekg(0); // moves the pointer in file to the start
    string line;
    getline(file, line);
    int pos = line.find('|');
    string _name = line.substr(0, pos);
    string _rollno = line.substr(pos+2);
    cout << "Name: " << _name << endl;
    cout << "Roll no: " << _rollno << endl;
    return 0;
}