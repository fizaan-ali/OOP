// 
// 
#include<iostream>
using namespace std;
class Base {
public:
    virtual void show(){
        cout << "This is base class" << endl;
    }
};
class A : public Base {
public: 
    void show(){
        cout << "This is class A " << endl;
    }
};
class B : public Base {
public:
    void show(){
        cout << "This is class B" << endl;
    }
};
void dm_polymorphism(Base* ptr){
    ptr->show();
}
int main(){
    Base* ptr;
    ptr = new A;
    dm_polymorphism(ptr);
    ptr = new B;
    dm_polymorphism(ptr);
    return 0;
}