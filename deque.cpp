#include<iostream>
#include<deque> // double ended queue
using namespace std;
int main(){
    // list -> no random access  -> l[2] -> invalid (gives error)
    // deque -> random access ⨻ -> d[2] -> valid (gives us value)
    deque<int> d = {1,2,3};
    d.push_back(0);
    d.push_front(2);
    for(int val : d)
        cout << val << " ";
    cout << endl;
    cout << d[3];
    return 0;
}