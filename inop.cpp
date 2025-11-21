#include<iostream>
using namespace std;
class Count {
private:
    int age;
    string name;
public:
    Count(){}
    friend ostream& operator<<(ostream &out, const Count &obj);
    friend istream& operator>>(istream &in, Count &obj);
};
ostream& operator<<(ostream &out,  const Count &obj){
    out << "Name = " << obj.name << endl;
    out << "Age = " << obj.age;
    return out;
}
istream& operator>>(istream &in, Count &obj){
    cout << "Enter your name: ";
    getline(in>>ws, obj.name);
    cout << "Enter your age: ";
    in >> obj.age;
    return in;
}
int main(){
    Count a1, a2;
    cin >> a1 >> a2;
    cout << endl << a1 << endl << a2 << endl;
    return 0;
}
/*
first of all tell me in any normal case we are using the return type of class but here we are referening the class using & and also i didn't also know about istream and ostream what are these and also you didn't use cin and cout anywhere instead you use in and out but in main you use those and also you are also referencing the things in the function parameter and also why are you declaring and most of all defining the friend functions inside the class isn't they are outside the function i don't know that
and also we are calling this function (op overloading) with 2 function parameters and you see bcz in previous cases we have only one parameter and in body we use the calling object value and the parameter passed value you know what i'm saying 
*/