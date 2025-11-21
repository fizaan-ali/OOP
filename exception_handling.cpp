#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    try{
        if(num2==0){
            throw string("Division by zero is undefined!");
        }
        cout << "Result = " << num1/num2 << endl;
    }
    catch(string msg){
        cout << "Error: " << msg << endl;
    }
    return 0;
}