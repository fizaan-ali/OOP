#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> :: iterator it;
    
    for(it=vec.begin(); it!=vec.end(); it+=1){ // forward loop 
        cout << *(it) << " " ;
    }
    //begin() -> points to the first value of vector
    //end() -> points to the value next to the end value of the vector
    cout << endl;

    
    for(auto rit=vec.rbegin(); rit!=vec.rend(); rit++){ // reverse loop -> auto automatically identifies the type which we wanna create
        cout << *(rit) << " ";
    }
    //rbegin -> points to the end value of the vector (reverse begin)
    //rend -> points the value just preceding the first value of vector (reverse end)
    return 0;
}