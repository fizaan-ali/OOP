#include <iostream> 
using namespace std;
class Shape {
public:
    float area(){
        return 0.0;
    } 
};
class Rectangle : public Shape {
public:
    float length, breadth;
    Rectangle(float l, float b){
        length = l;
        breadth = b;
    }
    float area(){
        return length * breadth;
    }
};
class Triangle : public Shape {
public:
    float base, height;
    Triangle(float b, float h){
        base = b;
        height = h;
    }
    float area(){
        return 0.5 * base * height;
    }
};
int main(){
    Rectangle r1(3.5,2.02);
    Triangle t1(3.2, 5.3);
    cout << r1.area() << endl;
    cout << t1.area() << endl;
    return 0;
}