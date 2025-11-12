#include <iostream>
using namespace std;
class A {
    public:
        virtual void show() = 0;
};
class B : public A{
    
};
class C : public A{
    public:
        void show(){
            cout << "Class C";
        }
};
int main(){
    C obj;
    obj.show();
    return 0;
}