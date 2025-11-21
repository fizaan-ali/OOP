#include<iostream>
using namespace std;
class Count {
public:
    int x;
    Count(){x=0;}
    Count(int value){
        x = value;
    }
    Count operator+=(Count obj){
        x = x + obj.x;
        return *this;
    }
    int operator==(Count obj){
        if(x==obj.x)
            return 1;
        else 
            return 0;
    }
    Count operator++(int){
        Count temp;
        temp.x = x;
        x = x + 1;
        return temp;
    }
    void show(){
        cout << "x=" << x << endl;
    }
};
int main(){
    Count a1(10), a2(20);
    a1.show();
    a2.show();
    a1 += a2;
    a1.show();
    a2.show();
    cout << (a1==a2) << endl;
    a1++;
    a1.show();
    return 0;
}