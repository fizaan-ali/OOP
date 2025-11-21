#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    string department;
public:
    virtual void get_data() = 0;
    virtual void show_data() = 0;
};
class Medical : public Student {
public:
    void get_data(){
        cout << "(Medical)" << endl << "Enter the name: ";
        getline(cin, name);
        department = "Medical";
    }
    void show_data(){
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};
class Engineering : public Student {
public:
    void get_data(){
        cout << "(Engineering)" << endl << "Enter the name: ";
        getline(cin, name);
        department = "Engineering";
    }
    void show_data(){
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};
class Science : public Student {
public:
    void get_data(){
        cout << "(Science)" << endl << "Enter the name: ";
        getline(cin, name);
        department = "Science";
    }
    void show_data(){
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};
int main(){
    Student * ptr[3];
    ptr[0] = new Medical;
    ptr[2] = new Engineering;
    ptr[1] = new Science;
    
    for(int i=0; i<3; i++){
        ptr[i] -> get_data();
    }
    for(int i=0; i<3; i++){
        ptr[i] -> show_data();
    }
    return 0;
}