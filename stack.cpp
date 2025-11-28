#include<iostream>
#include<iomanip>
#include<stack> //LIFO -> last in, first out 
using namespace std;

int main(){
    stack<int> s;
     s.push(1);
     s.push(2);
     s.push(3);
     cout << "top value: " << s.top() << endl;
     cout << "is empty: " << boolalpha <<  s.empty() << endl;
    return 0;
}
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     cout << "size of stack: " << s.size() << endl;
//     while(!s.empty()){
//         cout << s.top() << " " ;
//         s.pop() ;
//     }
//     cout << endl;

//     return 0;
// }
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> s1;
//     s1.push(1);
//     s1.push(2);
//     s1.push(3);

//     stack<int> s2; // s2 -> empty stack

//     s2.swap(s1); // it swaps valuess means s1 is now empty. s2 now holds three values

//     cout << "s1 size: " << s1.size() << endl;
//     cout << "s2 size: " << s2.size() << endl;
//     return 0;
// }