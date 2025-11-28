#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    cout << "vec.begin " << *(vec.begin()) << endl; //it points to the first value of vector
    cout << "vec. end " << *(vec.end()) << endl; // it points to the value next to end of vector means in this case position 6 -> so depending upon the compiler it gives some random garbage value

    return 0;
}