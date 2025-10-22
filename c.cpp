// using functions outside of class 
#include <iostream>
using namespace std;
class Book {
    private:
        string name;
        float price;
    public:
        void get();
        void show();
        void set(string , float);
        float getprice();
};
void Book::get(){
    cout << "Enter book name: " ;
    getline(cin, name);
    cout << "Enter book price: ";
    cin >> price;
}
void Book::show(){
    cout << "Book Name: " << name << endl;
    cout << "Book Price: " << price << endl;
}
void Book::set(string bname, float bprice){
    name = bname;
    price = bprice;
}
float Book :: getprice(){
    return price;
}
int main(){
    Book b1, b2;
    b1.get();
    b2.set("OOP", 300);
    cout << "Most costly is: " << endl;
    if(b1.getprice() > b2.getprice())
        b1.show();
    else 
        b2.show();
    return 0;
}