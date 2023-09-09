#include <iostream>
using namespace std;

// Hybrid Inheritance Implemented Combining of More Than One Inheritance...

// Single Inheritance Class A Inherit Class B...

class A
{
public:
    void Base1()
    {
        cout << "\nBase 1 Class function... \n";
    }
};

class B : public A
{
public:
    void Base2_Derive1()
    {
        cout << "\nBase 1 and Derive 1 Class function... \n";
    }
};

class C
{
public:
    void Base2()
    {
        cout << "\nBase 2 Class function... \n";
    }
};

// Multiple Inheritance Class B and Class C Inherit in Class D...

class D : public B, public C
{
public:
    void Derive2()
    {
        cout << "\nDerive 2 Class function... \n \n";
    }
};

int main()
{
    B obj1;
    D obj2;
    obj1.Base1();
    obj1.Base2_Derive1();
    obj2.Base2_Derive1();
    obj2.Base2();
    obj2.Derive2();
    return 0;
}