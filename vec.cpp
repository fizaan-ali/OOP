#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    
    // vec.erase(vec.begin()+2); // not a pointer but an iterator

    vec.erase(vec.begin()+1, vec.begin()+4); // range of erasing start including, while end excluding
    vec.insert(vec.begin() + 3, 23); // first is address second is value
    vec.clear();    
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;

}