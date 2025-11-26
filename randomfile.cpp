#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream file("demo.dat", ios::out | ios::in | ios::binary | ios::trunc);
    int x = 100;
    file.write((char*)&x, sizeof(int));
    file.seekg(0);
    int y;
    file.read((char*)&y, sizeof(int));
    cout << y;
    file.close();
    return 0;
}