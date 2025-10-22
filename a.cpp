#include <iostream>
using namespace std;
class Student{
private: 
    string name;
    int roll_no;
    int sem;
    float cgpa;
public:
    void in(){
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter the semester: ";
        cin >> sem;
        cout << "Enter the CGPA: ";
        cin >> cgpa;
        cout << endl;
    }
    void out(){
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << roll_no << endl;
        cout << "Semester: " << sem << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main(){
    Student s1, s2, s3; // jitne marzi banao 
    s1.in();
    s2.in();
    s3.in();
    s1.out(); 
    cout << endl;
    s2.out();
    cout << endl;
    s3.out();
    return 0;
}