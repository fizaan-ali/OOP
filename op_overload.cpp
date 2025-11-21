#include <iostream>
using namespace std;
class A {
public:
    int value;
    A(){}
    A(int v){value = v;}
    A operator++(){
        value = value + 1;
        return *this;
    }
    A operator++(int){
        A old = *this;
        value = value + 1;
        return old;
    }
    A operator+(A obj){
        A temp;
        temp.value = value + obj.value;
        return temp;
    }
    void display(){
        cout << value << endl;
    }
};
int main(){
    A obj(10);
    obj.display();
    ++obj;
    obj.display();
    A oobj = ++obj;
    oobj.display();
    A _oobj = obj++;
    _oobj.display();
    A _obj;
    _obj = obj + _oobj;
    _obj.display();
    _obj = obj + _oobj;
    _obj.operator+(obj);
    return 0;
}