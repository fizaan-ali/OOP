#include <iostream>
using namespace std;
class A{
    private:
        int n;
    public:
        A(){
            n = 0;
        }
    friend class B;
};
class B{
    public:
        void show(A obj){
            cout << "Value of n: " << obj.n;
        }
friend class A;
};
int main() {
    A x; B y;
   //  x.show(x); // B function can't be accessed through A object 
   y.show(x);
    return 0;
}