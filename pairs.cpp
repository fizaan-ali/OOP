#include<iostream>
#include<vector> // no need to include header file for pairs
using namespace std;

int main(){
    // pair -> can be between any two data types
    // pair<int, int> p = {555, 17}; 
    pair<string, int> p = {"Fizaan", 555};

    cout << p.first << endl;
    cout << p.second << endl;

    // pair<string, pair<int, int>> _p = {"Fizaan", {17, 555}}; // pair of pair
    // cout << _p.first << endl;
    //  cout << _p.second << endl; // this would give an error
    // cout << _p.second.first << endl;
    // cout << _p.second.second << endl;

    vector<pair<string, int>> vec = {{"Fizaan", 55},{"Ans", 64},{"Suleman", 51}};

    vec.push_back({"Ali", 89}); // insert
    vec.emplace_back("Abdullah", 93); // in-place objects create 

    for(pair<string, int> p : vec){ // or simply use auto keyword
        cout << p.first << ", " << p.second << endl;
    }

    return 0;
}