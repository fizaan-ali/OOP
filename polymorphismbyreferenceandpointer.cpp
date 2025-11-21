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
void dm_polymorphism(Base& obj){
    obj.show();
}
int main(){
    A obj1;
    B obj2;
    dm_polymorphism(obj1);
    dm_polymorphism(obj2);
    return 0;
}