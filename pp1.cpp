// 

#include<iostream>
using namespace std;
class A {
    int x, y;
public:
    A& set(int val1, int val2){
        x = val1; y = val2;
        return *this;
    }
    A& get() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        return *this;
    }
};
int main(){
    A obj1, obj2;
    obj2 = obj1.set(10, 20).get();
    obj2.get();
    return 0;
}