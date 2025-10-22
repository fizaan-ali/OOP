#include <iostream>
#define PI 3.14159
using namespace std;
class Circle {
    private:
        float radius;
        int originx, originy;
    public:
        Circle(){
            radius = 0;
            originx = originy = 0;
            cout << "Default constructor Called!" << endl;
        }
        Circle(float r, int x, int y){
            radius = r;
            originx = x;
            originy = y;
        }
        ~Circle(){
            cout << "Destructor called!";
        }
        void setData(){
            cout << "Enter the radius: ";
            cin >> radius;
            cout << "Enter the x-coordinate: ";
            cin >> originx;
            cout << "Enter the y-coordinate: ";
            cin >> originy;
        }
        void getData(){
            cout << "Radius: " << radius << endl;
            cout << "Origin x : " << originx << endl;
            cout << "Origin y: " << originy << endl;
        }
        int originX(){
            return originx;
        }
        int originY(){
            return originy;
        }
        double area(){
            return PI * radius * radius;
        }
        double circumference(){
            return 2 * PI * radius;
        }
        double diameter(){
            return 2 * radius;
        }

};

int main() {
    Circle c1;
    c1.setData();
    c1.getData();
    cout << "Area is: " << c1.area() << endl;
    cout << "Circumference is: " << c1.circumference() << endl;
    cout << "Diameter is: " << c1.diameter() << endl;
    cout << "Center is: " << "(" << c1.originX() << "," << c1.originY() << ")" << endl;
    return 0;
}