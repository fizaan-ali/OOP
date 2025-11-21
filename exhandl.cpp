#include <iostream>
using namespace std;
void sub(int p, int q){
    try{
        if(p==0)    
            throw p;
        else   
            cout << "Result is: " << p - q << endl;
    }
    catch(int){
        cout << "Null value" << endl;
        throw p;
    }
}

int main(){
    try{
        sub(1,4);
        sub(0,5);
    }
    catch(int){
        cout << "Null value inside main" << endl;
        cout << "End of main" << endl;
    }
    return 0;
}