#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream obj("one.txt", ios::in | ios::out | ios::trunc);
    cout << obj.tellp() << endl;
    obj << "Hello World";
    cout << obj.tellp() << endl;
    obj.seekp(-5, ios::end);
    cout << obj.tellp() << endl;
    obj << "Fizaan";
    cout << obj.tellp() << endl;
    string data;
    obj >> data;
    cout << data << endl;
    obj.close();
    return 0;
}