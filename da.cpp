#include <iostream>
using namespace std;
class X;
class Y;
void sum(X,Y);
class X{
    int data;
    public:
        void setData(int value){
            data = value;
        }
        void getData(){
            cout << "Data: " << data;
        }
    friend void sum(X,Y);
};
class Y{
    int num;
    public:
        void setData(int value){
            num = value;
        }
        void getData(){
            cout << "Num: " << num; 
        }
    friend void sum(X,Y);
};
void sum(X o1, Y o2){
    cout << "Sum = " << o1.data + o2.num;
}
int main() {
    X obj1; Y obj2;
    obj1.setData(5);
    obj2.setData(3);
    sum(obj1, obj2);
    return 0;
}