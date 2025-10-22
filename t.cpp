#include <iostream>
#include <cmath>
using namespace std;
class Operation {
    int firstNo, secondNo;
    public: // all functions inside class are by-default inline!!
        void input(){
            cout << "Enter first integer: ";
            cin >> firstNo;
            cout << "Enter second integer: ";
            cin >> secondNo;
            cout << endl;
        }
        void output(){
            cout << "First number: " << firstNo << endl;
            cout << "Second number: " << secondNo << endl;
        }
        int add(){
            return firstNo + secondNo;
        }
        int subtract(){
            return firstNo-secondNo;
        }
        int multiply(){
            return firstNo*secondNo;
        }
        float divide(){
            if(secondNo==0)
                cout << "Division by zero is undefined!";
            
            return firstNo / secondNo;
        }
        int modulus(){
            return firstNo % secondNo;
        }
        double power(){
            return pow(firstNo, secondNo);
        }
        float squareRoot(){
            return pow(secondNo, 1.0f/firstNo);
        }

}; // if declared outside we have to write inline to make them inline 
// inline int Operation :: add(){
//     return num1 + num2;
// }
int main() {
    Operation op;
    op.input();
    op.output();
    cout << "Sum is: " << op.add() << endl;
    cout << "Difference is: " << op.subtract() << endl;
    cout << "Product is: " << op.multiply() << endl;
    cout << "Modulus is: " << op.modulus() << endl;
    cout << "Division is: " << op.divide() << endl;
    cout << "Power is: " << op.power() << endl;
    cout << "Square root is: " << op.squareRoot() << endl;

    return 0;
}