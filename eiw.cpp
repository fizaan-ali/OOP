// #include <iostream>
// using namespace std;
// template <class T>
// T add(T a, T b){
//     return a + b;
// }
// int main(){
//     cout << add(4,2) << endl;
//     cout << add(4.2, 2.2) << endl;
//     cout << add((int)'A' , 2) << endl;
//     cout << add((float)2, 2.2f) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
template <class T>
class Box{
    public:
        T value;
    void setValue(T a){
        value = a;
    }
    void getValue(){
        cout << value << endl;
    }
};
int main(){
    Box<int> obj;
    obj.setValue(1);
    obj.getValue();
    Box<string> obj1;
    obj1.setValue("hello there");
    obj1.getValue();
    Box<float> obj2;
    obj2.setValue(5.2);
    obj2.getValue();
    return 0;
}