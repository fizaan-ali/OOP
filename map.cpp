#include<iostream>
#include<map>
using namespace std;

int main(){
    //map -> used to visualize key value pairss
    // key must be unique -> cannot be duplicate but values can
    map<int, string> m;
    m[77] = "fahad";
    m[51] = "suleman";
    m[55] = "fizaan";
    m[82] = "saad";
    m[64] = "ans";
    m.insert({80, "Ahad"});
    m.emplace(57, "Abaidullah");
    m.erase(77);
    for(auto p : m){//pair
        cout << p.first << " " << p.second << endl;
    }
    //now if we print it map by default sorts our value in ascending order means roll numbers are gonna print from smallet to highest
    cout << "no. of keys: " << m.count(55) << endl;//no. of instances associated with specific key
    cout << m[64] << endl; 

    if(m.find(85) != m.end() ) // m.find -> if find returns iterator if not found returns m.end()
        cout << "found";
    else 
        cout << "not found";

    return 0;
}