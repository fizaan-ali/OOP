#include <iostream>
using namespace std;
class Employee{
    public:
        int id;
        string name;
        Employee(){}
        Employee(string n, int i){
            name = n;
            id = i;
        }
        void show(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
        }
};
class Programmer : Employee{
    public:
        int lang_code;
    Programmer(int lang){
        lang_code = id;
    }
    void show(){
        
        cout << "Lang: " << lang_code << endl;
    }

};
int main() {
    Employee e1("Fizaan", 89), e2("Ali", 33);
    e1.show();
    e2.show();
    Programmer p1(9);
    p1.show();
    return 0;
}
/*
Derived Class syntax:
class {derived-class-name} : {visibility-mode} {base-class-name}
note:
1. default visibility mode is private
2. Public visibility mode: Public members of the base class becomes the public members of derived class
3. Private visibility mode: Public members of the base class becomes the private members of the derived class
4. Private members of the base class are never inherited.
*/