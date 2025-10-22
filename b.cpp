#include <iostream> 
using namespace std;
class Book {
    private:
        string name;
        float price;
    public:
        void get(){
            cout << "Enter the book name: ";
            getline(cin, name);
            cout << "Enter the book price: ";
            cin >> price;
        }
        void show(){
            cout << "Book Name: " << name << endl;
            cout << "Book Price: " << price << endl;
        }
        void set(string bname, float bprice){
            name = bname;
            price = bprice;
        }
        float getprice(){
            return price;
        }
};
int main(){
    Book b1, b2;
    b1.get();
    b2.set("Database", 400);
    cout << "Most costly book is: " << endl;
    if(b1.getprice() > b2.getprice()){
        b1.show();
    }
    else 
        b2.show();

    return 0;
}