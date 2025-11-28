#include<iostream>
#include<queue> //FIFO -> first in, first out // order of pushing and poping is same 
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}