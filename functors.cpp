// #include<iostream>
// using namespace std;
// class Add {
// public:
//     int operator()(int num1, int num2){
//         return num1 + num2;
//     }
// };
// int main(){
//     Add obj;
//     cout << obj(3,2);
//     return 0;
// } 
#include<iostream>
using namespace std;
class Demo {
    int n;
public:
    Demo(int num) : n(num){}
    Demo(){}
    void operator()(){
        if(n % 2 == 0)
            cout << "Number is even!" << endl;
        else 
            cout << "Number is odd!" << endl;
    }
};
int main(){
    Demo obj(30);
    obj();
    return 0;
}
