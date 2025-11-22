#include<iostream>
using namespace std;

int main(){
    double num, sum = 0;
    int count = 0;
    bool allNeg = true;
    cout << "Enter the numbers (letter to stop): ";
    while(1){
        cin >> num;
        if(cin.fail())
            break;
        
        count++;
        sum+=num;
        if(num >= 0)
            allNeg = false;
    }
    try{
        if(count < 5){
            throw runtime_error("Runtime error: count is less than 5");
        }
        if(allNeg){
            throw domain_error("Domain erro: all numbers are negative");
        }
    }
    catch(exception &e){
        cout << e.what()  << endl; 
    }
    return 0;
}