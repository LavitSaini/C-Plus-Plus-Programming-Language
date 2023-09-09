#include <iostream>
using namespace std;

class A
{
public:
    void Base()
    {
        cout << "\nBase 1 Class function... \n";
    }
};

class B : public A
{
public:
    void Derive1()
    {
        cout << "\nDerive 1 Class function... \n";
    }
};

class C : public A
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
    C obj2;
    obj1.Base();
    obj1.Derive1();
    obj2.Base();
    obj2.Derive2();
    return 0;
}