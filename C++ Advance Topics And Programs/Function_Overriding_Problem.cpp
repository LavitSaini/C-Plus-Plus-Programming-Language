#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun_Overriding_Problem()
    {
        cout << "Good Morning \n";
    }
};

class B : public A
{
public:
    void fun_Overriding_Problem()
    {
        cout << "Good Night \n";
    }
};

int main()
{
    B obj;
    obj.fun_Overriding_Problem();
    obj.A::fun_Overriding_Problem();
    return 0;
}