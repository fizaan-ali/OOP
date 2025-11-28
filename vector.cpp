#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3); // also ad values at the last
    v.push_back(4);
    v.push_back(5);
    v.push_back(6); // adds a value at the last 
    v.pop_back(); // removes last character

    for(int val : v){ // for each loop
        cout << val << " ";
    }
    cout << endl;
    cout << "Value at index 3: " << v.at(3) << endl;

    cout << "First value:" << v.front() << endl;
    cout << "Last value:  " << v.back() << endl;
    return 0;
}
// size: actual no. of values
// capacity: how many it can hold if there is a full new vector of double size is formed and the previous one is gnna copied 
// #include<iostream>
// #include<vector> 
// using namespace std;

// int main(){
//     vector<int> vec = {1,3,4,5,6};
//     cout << vec.size() << endl;
//     cout << vec.capacity() << endl;
//     vec.push_back(3);
//     cout << vec.size() << endl;
//     cout << vec.capacity() << endl;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec(10, 33);//put 33 --> 10 times in a vector
//     for(int val : vec){
//         cout << val << " ";
//     }
//     return 0;
// }