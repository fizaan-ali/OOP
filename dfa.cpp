#include <iostream>
using namespace std;
class X{
    private:
        string name;
        int age;
    public:
        void setData(string _name, int _age){
            name = _name;
            age = _age;
        }
        void getData(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
    friend void fun(X);
};
void fun(X o){
    o.name = "Fizaan";
    o.age = 16;
}
int main() {
    X obj;
    obj.setData("Ali", 18);
    obj.getData();
    fun(obj);
    obj.getData();
    return 0;
}