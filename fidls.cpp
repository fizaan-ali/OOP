#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream file("file.txt", ios::in | ios::out | ios::trunc);
    file << "My name is Fizaan\nI am a student\nI love learning\nI study computer science";
    string line; string alldata;
    file.seekp(0);
    while(getline(file, line)){
        alldata += line + "\n";
    } 
    cout << alldata;
    return 0;
}