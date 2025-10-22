#include <iostream>
using namespace std;
class Vehicle {
    string company;
    string fuelType;
    int yearOfManufacture;
    int yearOfPurchase;
    string color;
    int engineCapacity;
    public:
        Vehicle(){
            cout << "Default Constructor of Vehicle called!" << endl;
            company = fuelType  = color = "";
            yearOfManufacture = yearOfPurchase = engineCapacity = 0;
        }
        void inputDetails(){
            cout << "Enter the company name: ";
            cin >> company;
            cout << "Enter the fuel type: ";
            cin >> fuelType;
            cout << "Enter year of manufacture: ";
            cin >> yearOfManufacture;
            cout << "Enter year of purchase: ";
            cin >> yearOfPurchase;
            cout << "Enter color: ";
            cin >> color;
            cout << "Enter engine capacity: ";
            cin >> engineCapacity;
        }
        void outputDetails(){
            cout << "Company Name: " << company << endl;
            cout << "Fuel Type: " << fuelType << endl;
            cout << "Year of Manufacture: " << yearOfManufacture << endl;
            cout << "Year of Purchase: " << yearOfPurchase << endl;
            cout << "Color: " << color << endl;
            cout << "Engine Capacity: " << engineCapacity << endl;
        }
        void isOld(){
            int r = yearOfPurchase - yearOfManufacture;
            if(r==0)
                cout << "Vehicle is purchased in the same year as it is manufactured!" << endl;
            else
                cout << "Vehicle is " << r << " years old!" << endl;
        }   
        ~Vehicle(){
            cout << "Destructor Called." << endl;
        }
};
int main() {
    Vehicle v1;
    v1.inputDetails();
    cout << endl;
    v1.outputDetails();
    cout << endl;
    v1.isOld();
    return 0;
}