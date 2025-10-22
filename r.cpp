#include <iostream>
using namespace std;
class Student {
    private:
        string  name; int  roll;
    public:
        // Student(){
    
        // }
        Student(string nm, int rl){
            name = nm;
            roll = rl;
        }
};
int main() {
    Student s1;
    return 0;
}
// we have to define the default constructor (constructor with no arguments) if we 
// have any other parametrized constructor bcz if we will not there will show 
// an error when we want to declare object without any parameters bcz there 
// will be no default constructor 