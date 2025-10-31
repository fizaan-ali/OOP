#include <iostream>
using namespace std;
class Complex {
    int r, c;
    public:
        void setdata(int real, int complex){
            r = real, c = complex;
        }
        void getdata(){
            cout << "Complex Number: " << r << " + " << c << "i" << endl;
        }
    friend int addReal(Complex, Complex);
    friend int addComplex(Complex, Complex);
};
int addReal(Complex o1, Complex o2){
    int rr = o1.r + o2.r;
    return rr;
}
int addComplex(Complex o1, Complex o2){
    int cr = o1.c + o2.c;
    return cr;
}
int main() {
    Complex c1, c2;
    c1.setdata(1,4);
    c2.setdata(3,4);
    cout << addReal(c1, c2) << endl;
    cout << addComplex(c1, c2);

    return 0;
}