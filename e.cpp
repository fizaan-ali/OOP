#include <iostream>
using namespace std;
class Book {
    private:
        int price;
        string name;
    public:
        string author;
        int copies;
        void SetData(){
            cin >> price >> name >> author >> copies;
        }
        void ShowData(){
            cout << price << " " << name << " " << author << " " << copies;
        }

};
int main(){
    Book b;
    b.SetData();
    b.author = "Fizaan";
    // b.price = 23; // this will give error because price is private!
    b.ShowData();
    return 0;
}