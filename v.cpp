#include <iostream>
using namespace std;
class Car {
    private:
        int wheels, doors;
        float currentSpeed;
    public:
    Car(){
        wheels = doors = 0;
        currentSpeed = 0;
    }
    Car(int numberOfDoors){
        doors = numberOfDoors;
    }
        void speed(){
            currentSpeed += 5;
        }
        void brake();
};
void Car :: brake(){
    currentSpeed -= 5;
}
int main(){
    Car ferrari, mustang;
    
    return 0;
}
