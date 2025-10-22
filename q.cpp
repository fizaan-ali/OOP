// Destructor
#include <iostream>
using namespace std;
class Area {
    private:
        int l, w;
        float ar;
    public:
        Area(){
            cout << "Object Created!" << endl;
        }
        ~Area(){
            cout << "Object Destroyed!" << endl;
        }
        Area(int a, int b){
            l = a;
            w = b;
        }
        void show(){
            cout << "length: " << l << endl;
            cout << "width: " << w << endl;
        }
};
int main() {
    Area a1(3,5) , a2(2,9), a3, a4;
    cout << "Hello there how are you!" << endl;
    a3 = a1;
    a4 = a2;
    a1.show();
    a2.show();
    a3.show();
    a4.show();
    return 0;
}