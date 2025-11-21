#include <iostream>
using namespace std;
class A {
private:
    int n;
public:
    A(){n=0;}
    A operator++(){
        A temp;
        n = n+1;
        temp.n = n;
        return temp;
    }
    A operator++(int){ //dummy int for telling the compiler that its post-increment
        A temp;
        temp.n = n;
        n = n + 1;
        return temp;
    }
    
    A operator+(A obj){
        A temp;
        temp.n = n + obj.n;
        return temp;
    }
    bool operator==(A obj){
        if(n==obj.n)
            return true;
        else 
            return false;
    }
    A operator<<(A obj){}   //abhi dekhein gein ise baad me !!!
    void show(){
        cout << "n = " << n << endl;
    }
};
int main(){
    A x, y;
    y = ++x;
    x.show();
    y.show();
    A z = x + y;
    z.show();
    cout << (x==y);
    return 0;
}
