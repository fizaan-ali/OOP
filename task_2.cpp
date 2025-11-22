#include<iostream>
using namespace std;
class Person {
    string name;
    int age;
    bool isStudent;
public:
    Person(string nm, int a, bool St) : name(nm), age(a), isStudent(St){}
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student Status: " << boolalpha <<  isStudent << endl;
    }
};
int main(){
    string name, status;
    int age;
    bool isStudent;
    cout << "Enter name: ";
    cin >> name;
    try{
        cout << "Enter age: ";
        cin >> age;
        if(age < 0)
            throw invalid_argument("Age cannot be negative!");
        cout << "Are you a student? (yes/no)";
        cin >> status;
        if(status == "yes")
            isStudent = true;
        else if(status == "no")
            isStudent = false;
        else 
            throw invalid_argument("Invaid input for student status!");
            
        Person obj(name, age, isStudent);
        obj.display();
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
    return 0;
}