#include <iostream>
using namespace std;
class Data{
    int age; string name;
    public:
        Data(){
            age = 0;
            name = "";
        }
        Data(int a, string n){
            age = a;
            name = n;
        }
        Data(Data &obj){
            cout << "Copy constructor called!" << endl;
            name = obj.name;
            age = obj.age;
        }
        // copy constructor is going to automatically called if we don't place by ourselves!
        void display(){
            cout << "Age: " << age << endl;
            cout << "Name: " << name << endl;
        }
};
int main() {
    Data s, s1;
    s.display();
    s1 = s;
    s.display();
    Data s2(s);
    s2.display();
    return 0;
}