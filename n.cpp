#include <iostream>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
        void setData(int num1, int num2){
            a = num1, b = num2;
        }
        void print(){
            cout << "Your number is: " << a << " + " << b << "i" << endl;
        }
        // Below line means the sumComplex function is allowed to do anything with my private members
        friend Complex sumComplex(Complex o1, Complex o2);
};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setData((o1.a+o2.a),(o2.a+o2.b));
    return o3;
}
int main(){
    Complex c1, c2, sum;
    c1.setData(1,4);   
    c1.print();
    c2.setData(3,5);
    c2.print();
    sum = sumComplex(c1,c2);
    sum.print();
    return 0;
}
/* Properties of friend functions:
1. Function is not the part of the class.
2. since it is not the part of class, it cannot be called from the object of that class e.g. c1.sumComplex() --> invalid
3. Can be invoked without the hlep of any object
4. Usually contains objects as arguments
5. Can be declared insidie public or private section of class.
6. It cannot access the members directly by their names and need object_name.member_name to access any member. like cout << a --> invalid / cout << obj.a --> valid

*/