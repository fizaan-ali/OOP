#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Employee
{
private:
    string name, department, position;
    int id;

public:
    Employee()
    {
        name = department = position = "";
        id = 0;
    }
    Employee(int id_, string name_)
    {
        id = id_;
        name = name_;
        department = position = "";
    }
    Employee(string name_, int id_, string department_, string position_)
    {
        name = name_;
        id = id_;
        department = department_;
        position = position_;
        cout << endl;
    }
    void getInfo()
    {
        cout << "Enter Employee's name: ";
        cin >> name;
        cout << "Enter Employee's id: ";
        cin >> id;
        cout << "Enter Employee's department: ";
        cin >> department;
        cout << "Enter Employee's position: ";
        cin >> position;
        cout << endl;
    }
    void setInfo(string _name, int _id, string _department, string _position)
    {
        name = _name;
        id = _id;
        department = _department;
        position = _position;
        cout << endl;
    }
    void printInfo()
    {
        cout << "Employee Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
    }
    void convertCaps()
    {
        for (int i = 0; i < name.length(); i++)
        {
            if (islower(name[i]))
                name[i] = toupper(name[i]);
            else
                name[i] = tolower(name[i]);
        }
        for (int i = 0; i < department.length(); i++)
        {
            if (islower(department[i]))
                department[i] = toupper(department[i]);
            else
                department[i] = tolower(department[i]);
        }
        for (int i = 0; i < position.length(); i++)
        {
            if (islower(position[i]))
                position[i] = toupper(position[i]);
            else
                position[i] = tolower(position[i]);
        }
    }

    ~Employee()
    {
        cout << "Destructor executed...." << endl;
    }
};
int main()
{
    Employee e1, e2;
    e1.getInfo();
    e2.setInfo("Fizaan", 55, "IT", "Developer");
    e1.printInfo();
    e2.printInfo();
    Employee e3("Ali", 41, "CS", "Tester"), e4(64, "Ans");
    e1.convertCaps();
    e2.convertCaps();
    e1.printInfo();
    e2.printInfo();
    return 0;
}