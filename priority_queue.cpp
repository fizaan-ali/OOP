#include<iostream>
#include<queue>
using namespace std;
int main(){
    //PRIORITY QUEUE (visulaize like a stack): (binary tree) -> largest priority element (by default which has the highest value ) is in the top 
    priority_queue<int> pq; //default: largest value -> priority
    // priority_queue<int, vector<int>, greater<int>> // if we want smallest value to be the hightest priority

    pq.push(3);
    pq.push(1);
    pq.push(10);
    pq.push(7);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop() ;
    }
    // first top element is largest one then pop it then top element is second larget one and so on!!
    cout << endl;

    return 0;
}