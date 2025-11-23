#include<iostream>
#include<stdexcept>
using namespace std;
class Account {
private:
    string name;
    double balance;
public:
    Account(string n, double b){
        if(b < 0 or b > 1000000){
            throw invalid_argument("Invalid starting balance!");
        }
        name = n;
        balance = b;
    }
    void deposit(double a){
        balance += a;
    }
    void withdraw(double a){
        if(a > balance){
            throw out_of_range("Not enough funds!");
        }
        balance -= a;
    }
    void transfer(Account &to, double a){
        if(a > balance){
            throw out_of_range("Not enough funds!");
        }
        to.balance += a;
        balance -= a;
    }
    void display_info(){
        cout << "User name: " << name << endl;
        cout << "User balance: " << balance << "$" << endl;
    }
};
int main(){
    try{
        Account a1("Fizaan", 100000);
        Account a2("Ans", 100);

        a1.deposit(10000);
        a1.withdraw(200);
        a1.transfer(a2, 10000);

        a1.display_info();
        a2.display_info();
    }
    catch(exception &e){
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}