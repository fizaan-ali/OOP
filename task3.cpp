#include <iostream>
using namespace std;
class Operation {
protected:
    float num1, num2;
public:
    virtual float calculate() = 0;
    virtual ~Operation(){}
};
class Addition : public Operation {
public: 
    Addition(float x, float y){
        num1 = x;
        num2 = y;
    }
    float calculate(){
        return num1 + num2;
    }
};
class Subtraction : public Operation {
public:
    Subtraction(float x, float y){
        num1 = x;
        num2 = y;
    }
    float calculate(){
        return num1 - num2;
    }
};
class Multiplication : public Operation {
public:
    Multiplication(float x, float y){
        num1 = x;
        num2 = y;
    }
    float calculate(){
        return num1 * num2;
    }
};
class Division : public Operation {
public:
    Division(float x, float y){
        num1 = x;
        num2 = y;
    }
    float calculate(){
        return num1 / num2;
    }
};
int main(){
    float x, y;
    char op;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> y;
    cout << "Enter the operation (+,-,*,/): ";
    cin >> op;
    Operation * ptr;
    switch(op){
        case '+': ptr = new Addition(x,y); break;
        case '-': ptr = new Subtraction(x,y); break;
        case '*': ptr = new Multiplication(x,y); break;
        case '/': ptr = new Division(x,y); break;
        default: cout << "Invalid entry"; return 0;
    }
    cout << "Result: " << ptr -> calculate() << endl;
    delete ptr;
    return 0;
}