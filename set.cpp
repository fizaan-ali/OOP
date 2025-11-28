#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s; // unique values only // sorted
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    for(int val : s){
        cout << val << " " ;
    }
    cout << endl;
    cout << "size: " << s.size() << endl;
    return 0;
}
// also there is multiset ==> duplicate entries allowed
// also there is unordered set ==> be defualt data is not sorted