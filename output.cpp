#include<iostream>
using namespace std;
class Base {
protected:
    int w, x;
public: 
    Base(int base1, int base2) : w(base1), x(base2){}
    void show(){
        cout << "w = " << w << endl;
        cout << "x = " << x << endl;
    }
};
class Derived : public Base {
protected:
    int y, z;
public: 
    Derived(int derived1, int derived2, int base1, int base2) : Base(base1, base2), y(derived1), z(derived2){}
    void display(){
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};
int main(){
    Derived obj(10, 20, 30, 40);
    obj.show();
    obj.display();
    return 0;
}