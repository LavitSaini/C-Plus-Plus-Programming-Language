#include <iostream>
using namespace std;
// Inheritance Exist on All Levels...
class A
{
public:
    void Base1()
    {
        cout << "\nBase 1 Class function.. \n";
    }
};

class B : public A
{ // Level 1
public:
    void Base2_Derive1()
    {
        cout << "\nBase 2 and Derive 1 Class function.. \n\n";
    }
};

class C : public B
{ // Level 2
public:
    void Derive2()
    {
        cout << "\nDerive 2 Class function..\n";
    }
};

int main()
{
    B obj1;
    C obj2;
    obj1.Base1();
    obj2.Base1();
    obj2.Base2_Derive1();
    return 0;
}