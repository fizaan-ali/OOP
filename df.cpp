#include <iostream>
using namespace std;
class Test {
    private:
        static int n;
    public:
        Test(){
            n++;
        }
    friend void show();
};
int Test :: n = 0;
void show(){
    cout << "Number of Objects declared = " << Test::n << endl;
}
int main() {
    Test a, b, c;
    show();
    return 0;
}
