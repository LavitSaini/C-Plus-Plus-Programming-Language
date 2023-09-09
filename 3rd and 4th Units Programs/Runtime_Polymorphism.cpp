#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "Hello Nitish \n";
    }

    void print()
    {
        cout << "C++ Language \n";
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Hi Nitish \n";
    }

    void print()
    {
        cout << "C Language \n";
    }
};

int main()
{
    B obj;
    A *ptr;
    ptr = &obj;
    ptr->show();
    ptr->print();
    obj.print();
    return 0;
}