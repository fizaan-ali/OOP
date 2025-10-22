// Constructor and Destructor
/*
What's constructor?
--> A constructor calls automatically when an object is created 
--> syntax: Employee(){
            }
*/
/*
What's destructor?
--> A destructor calls automatically when an object is destroyed or goes 
out of scope 
--> syntax: ~Employee() {
            }
*/
#include <iostream>
using namespace std;
class Book {
    int bId;
    public:
    Book(){
        cout << "Constructor called!" << endl;
    }
    ~Book(){
        cout << "Destructor called!" << endl;
    }
};
int main(){
    Book b1, b2, b3; // constructors will be called!
    
    return 0;
} // destructor will calls when it ends --> because objects are gonna destroy