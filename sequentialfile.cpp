#include <iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fileout("students.txt", ios::app);
    if (!fileout){
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    fileout << "Fizaan is learning C++\n";
    fileout.close();

    ifstream file("students.txt");
    string data;
    getline(file, data);
    cout << data;
    return 0;
}