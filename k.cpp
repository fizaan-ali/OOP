// Array of objects and passing objects as function arguments!
#include <iostream>
using namespace std;
class Employee {
    private:
        string name;
        int salary;
    public:
        void setData(){
            cout << "Enter the name and salary of the employee: ";
            cin >> name >> salary;
        }
        void getData(){
            cout << "Employee name: " << name << endl;
            cout << "Employee salary: " << salary << endl;
        }
};
int main(){
    Employee emp[5]; // array of objects!
    for(int i=0; i<5; i+=1){
        emp[i].setData();
    }
    cout << endl;
    for(int i=0; i<5; i++){
        emp[i].getData();
    }
    return 0;
}
