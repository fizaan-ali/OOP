#include<iostream>
using namespace std;
class Demo {
public:
    Demo* Fun1(){
        cout << 1 ;
        return this;
    }
    Demo* Fun2(){
        cout << 2 ;
        return this;
    }
    Demo* Fun3(){
        cout << 3 ;
        return this;
    }
};
int main(){
    Demo ob;
    ob.Fun1()->Fun2()->Fun3();
    return 0;;
    return 0;
    //123 -> output
}
/*
first ob.fun1() works --> print 1 and gives address of ob
second this->fun2() works --> print 2 and gives address of ob
third this->fun3() works --> print 3 and gives address of ob
*/