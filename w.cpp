#include <iostream>
using namespace std;
class Vehicle {
    private:
        string company, fuelType, color;
        int engineCapacity, yearOfManufacture, yearOfPurchase;
    public:
    Vehicle(){
        cout << "Default constructor of the vehicle is called!" << endl;
        company = fuelType = color = "";
        engineCapacity = yearOfManufacture = yearOfPurchase = 0;
    }
        void inputDetails(){
            cout << "Enter the company name: ";
            cin >> company;
            cout << "Enter the fuel type: ";
            cin >> fuelType;
            cout << "Enter the color: ";
            cin >> color;
            cout << "Enter the engine capacity: ";
            cin >> engineCapacity;
            cout << "Enter the year of manufacture: ";
            cin >> yearOfManufacture;
            cout << "Enter the year of purchase: ";
            cin >> yearOfPurchase;
            cout << endl;
        }
        void displayDetails(){
            cout << "Vehicle Details: " << endl;
            cout << "Company Name: " << company << endl;
            cout << "Fuel Type: " << fuelType << endl;
            cout << "Color: " << color << endl;
            cout << "Engine Capacity: " << engineCapacity << endl;
            cout << "Year of Manufacture: " << yearOfManufacture << endl;
            cout << "Year of Purchase: " << yearOfPurchase << endl;
        }
        void isOld(){
            int r = yearOfPurchase - yearOfManufacture;
            if(r==0)
                cout << "Vehicle is purchased in the same year as it is manufactures!" << endl;
            else 
                cout << "Vehicle is " << r << " year/s old!" << endl;
        }
    ~Vehicle(){
        cout << "Destructor called!";
    }
};
int main() {
    Vehicle v;
    v.inputDetails();
    v.displayDetails();
    v.isOld();
    return 0;
}