#include <iostream>
using namespace std;

class A
{
public:
    void Base1()
    {
        cout << "\nBase 1 Class function... \n";
    }
};

class B
{
public:
    void Base2()
    {
        cout << "\nBase 2 Class function... \n";
    }
};

class C : public A, public B
{
public:
    void Derive()
    {
        cout << "\nDerive Class function... \n \n";
    }
};

int main()
{
    C obj;
    obj.Base1();
    obj.Base2();
    obj.Derive();
    return 0;
}
