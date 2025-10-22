// Nested member functions
#include <iostream>
#include <string>
using namespace std;
class Binary {
    private:
        string s;
    public:
        void in();
        void out();
        void check();
        void one_comp();
        void sec_comp();
};
void Binary :: in(){
    cout << "Enter the binary number: ";
    cin >> s;
}
void Binary :: out(){
    cout << "Displaying binary number: " << s << endl;
}
void Binary :: check(){
    for(int i=0; i<s.length(); i++){
        if(s[i]!='0' && s[i]!='1'){
            cout << "Invalid binary number!";
            exit(0);
        }
    }
}
void Binary :: one_comp(){
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0')
            s[i] = '1';
        else
            s[i] = '0';
    }
}
void Binary :: sec_comp(){
    
}

int main(){
    Binary b;
    b.in();
    b.check();
    cout << "Before one's complement: " << endl;
    b.out();
    b.one_comp();
    cout << "After one's complement: " << endl;
    b.out();

    return 0;
}
    