#include<iostream>
#include<map>
using namespace std;
int main(){
    //multiap allows duplicate keys -> so we can't use the [] operator to get or insert values
    multimap<string, int> mm;
    mm.emplace("Fizaan", 55);
    mm.emplace("Fizaan", 71);
    mm.emplace("Fizaan", 89);
    mm.emplace("Fizaan", 93);
    // mm.erase("Fizaan"); //it will erase all instances of key "Fizaan";
    mm.erase(mm.find("Fizaan")); // now it will erase only one instance of "fizaan" bcz mm.find() returns iterator for one key value pair
    for(auto p : mm){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    return 0;
}

// #include<iostream>
// #include<map>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<int, string> m; // just like normal map which be default sorts out the value it won't it keeps them unordered
//     m[77] = "fahad";
//     m[51] = "suleman";
//     m[55] = "fizaan";
//     m[82] = "saad";
//     m[64] = "ans";
//     m.insert({80, "Ahad"});
//     m.emplace(57, "Abaidullah");

//     for(auto p: m){
//         cout << p.first << " " << p.second << endl;
//     }

//     return 0;
// }