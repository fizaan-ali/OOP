//update sequential file --> possible with the help of a temp file
#include <iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    ifstream fin("student.txt");
    ofstream fout("temp.txt");
    string searchName;
    cout << "Enter a name to update: " ;
    getline(cin, searchName);
    string newRoll;
    cout << "Enter new roll no: ";
    cin >> newRoll;
    string line;
    bool found = false;

    while(getline(fin, line)){
        int pos = line.find('|');
        string name = line.substr(0, pos);
        string roll = line.substr(pos+1);
        if(!name.empty() and name.back()==' ')
            name.pop_back();
        if(!roll.empty() and roll.front() == ' ')
            roll.erase(0,1);
        if(name == searchName){
            fout << name << " | " << newRoll << "\n";
            found = true;
        }
        else{
            fout << line << "\n";
        }

    }
    fin.close();
    fout.close();
    if(found){
        remove("student.txt");
        rename("temp.txt", "student.txt");
        cout << "Record updated successfully!" << endl;
    }
    else{
        remove("temp.txt");
        cout << "Record not found!" << endl;
    }
    return 0;
}