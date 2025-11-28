#include<iostream>
#include<list>
using namespace std;
int main(){
    // list --> doubly linked list
    list<int> l;
    //list<int> l = {1,2,3,4,5}; -> also a way of initialization
    // also has the same functions as vector 
    // --> size, erase, clear, begin, end, rbegin, rend, insert, front, back
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(0);
    l.push_front(3);
    l.pop_back();
    l.pop_front();

    for(int val : l)
        cout << val << " ";
    cout << endl;
    
    return 0;
}