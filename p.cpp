#include <iostream>
using namespace std;
class Area {
    
        
    public:
        int l, w;
        float ar;
        Area(){
            cout << "Hello";
        }
        Area(int a, float b, int c){
            l = a;
            w = b;
            cout << "Second one!";
        }
        Area(int a, int b , float f){
            l = a;
            ar = f;
            cout << "Third one!";
        }
};  
int main() {

    Area a1(2,3.0,5);
    cout << endl;
    Area a2(1,3,5.6);
    cout << endl;
    Area a3;

    return 0;
}
/* Constructor overloading:
--> it means that same name constructors but then how are we gonna differentiate 
them 
based on: 
number of parameters
type of paratmeters
sequence of parameters
only one constructor per parameter 
it means we can define more than one constructors
*/

