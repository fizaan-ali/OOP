// Static Data members and Functions
#include <iostream>
using namespace std;
class Employee {
    int id;
    static int count; // static data member --> belongs to class not any object 
    public: 
        
        void setData(){
            cout << "Enter Employee id: ";
            cin >> id;
            count++;
            cout << endl;
        }
        void getData(){
            cout << "The id of this employee is : " << id << endl;
        }
        static void count_(){ // static member function
            cout << "Toatl employess: " << count << endl;
        }
        
};

int Employee :: count = 0;
int main(){
    Employee fizaan, ali, areeb;
    // fizaan.id = 100; --> gives error because id is private!! --> we use method
    fizaan.setData();
    ali.setData();
    areeb.setData();
    fizaan.getData();
    ali.getData();
    areeb.getData();
    Employee :: count_();
    return 0;
}