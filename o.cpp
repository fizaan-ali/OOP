#include <iostream>
using namespace std;
class Complex;
class Calculator {
    public:
        int add (int a, int b){
            return a + b;
        }
        int sumRealComplex (Complex o1, Complex o2);
};
class Complex {
    private:
        int a, b;
        friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    public:
        void set(int n1, int n2){
            a = n1;
            b = n2;
        }
        void print(){
            cout << "complex number: " << a << " + " << b << "i" << endl;
        }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return o1.a + o2.a;
}
int main() {
    Complex c1, c2;
    c1.set(2,3);
    c1.print();
    c2.set(3,3);
    c2.print();
    Calculator obj;
    int sum = obj.sumRealComplex(c1,c2);
    cout <<"Real Sum: " << sum;
    return 0;
}