#include<iostream>
using namespace std;
class A{
private: 
    int pridataA;
protected:  
    int protdataA;
public:    
    int pubdataA;
    //Member functions
    int getPrivateA(){return pridataA;}
    int getProtectedA(){return protdataA;}
    int getPublicA(){return pubdataA;}
};
class B : public A {
private: 
    int pridataB;
    int getPrivateB(){return pridataB;}
protected:
    int prodataB;
    int getProtectedB(){return prodataB;}
public:
    int pubdataB;
    int getPublicB(){return pubdataB;}
};
class C : private A {
private:
    int pridataC;
    int getPrivateC(){return pridataC;}
protected:
    int prodataC;
    int getProtectedC(){return prodataC;}
public:
    int pubdataC;
    int getPublicC(){return pubdataC;}
};
class D : protected A {
protected:
    int pridataD;
    int getPrivateD(){return pridataD;}
    
    int prodataD;
    int getProtectedD(){return prodataD;}

    int pubdataD;
    int getPublicD(){return pubdataD;}
};
int main(){

    int a, b, c, d;
    A objA; B objB; C objC; D objD;

    return 0;
}

