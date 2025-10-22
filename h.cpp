// Objects memory allocation --> Member functions which are common 
// to all objects share the same memory bcz they are same to all objects
// while data memebers which are unique to all objects occupy memory 
#include <iostream>
using namespace std;
class Shop {
    private: 
        int itemId[10];
        int itemPrice[10];
        int counter;
    public:
        void initCounter(void);
        void in(void);
        void out(void);
        void incCounter(void);
};
void Shop :: initCounter(void){
    counter = 0;
}
void Shop :: in(void){
    cout << "Enter ID of item "<< counter + 1<< ": ";
    cin >> itemId[counter];
    cout << "Enter the price: ";
    cin >> itemPrice[counter];
    cout << endl;
}
void Shop :: incCounter(void){
    counter++;
}
void Shop :: out(void){
    for(int i=0; i<counter; i++){
        cout << "The Price of item with ID "<< itemId[i] << " is " << itemPrice[i] << endl;

    }
}

int main(){
    Shop sh;
    sh.initCounter();
    for(int i=0; i<5; i++){
        sh.in();
        sh.incCounter();
    }
    sh.out();
    return 0;
}