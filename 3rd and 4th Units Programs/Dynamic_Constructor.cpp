#include <iostream>
using namespace std;

class A
{
    char *ch;

public:
    A()
    {
        ch = new char[6];
        ch = "Hello";
    }

    void display()
    {
        cout << ch;
    }
};

int main()
{
    A obj;
    obj.display();
    return 0;
}