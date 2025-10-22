#include <iostream>
using namespace std;
class Area {
    private:
        float length, width;
    public:
        Area() {
            cout << "Hello, an object is created!" << endl;
        }
        void get();
        void set(float a, float b);
        void show();

};

void Area :: get(){
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
}
void Area :: show(){
    cout << "Length is: " << length << endl;
    cout << "Width is: " << width << endl;
    cout << "Area is: " << length * width << endl;
}
void Area :: set(float a, float b){
    length = a;
    width = b;
}

int main() {

    Area r;
    
    return 0;
}






