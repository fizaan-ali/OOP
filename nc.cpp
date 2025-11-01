// Multi Level Inheritance
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void setRoll(int);
    void getRoll(void);
};
void Student ::setRoll(int r)
{
    roll_number = r;
}
void Student ::getRoll()
{
    cout << "Roll Number: " << roll_number << endl;
}
class Exam : public Student
{
    // roll_number would inherited protected
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m, physics = p;
    }
    void getMarks()
    {
        cout << "Maths Marks: " << maths << endl;
        cout << "Physics Marks: " << physics << endl;
    }
};
class Result : public Exam{
    float percentage;
    public:
        void display()
};
int main()
{

    return 0;
}