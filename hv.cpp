#include <iostream>
using namespace std;
class Base{
    protected:// like private but can inherited 
    int a;
    private:
    int b;
};
class Derived : protected Base {

};
/*
For a protected member:
                         | public derivation     private derivation      protected derivation
    private members     not inherited             not inherited           not inherited  
    protected members   protected                 private                 protected
    public members      public                    private                 protected
*/
int main() {
    Derived d;
    // cout << d.a ; will not work bcz a is protected and can't be access directly
    return 0;
}