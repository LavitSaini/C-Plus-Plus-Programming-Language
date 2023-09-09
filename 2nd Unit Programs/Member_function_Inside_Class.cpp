#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    //Member function Inside Class Defination...
    void Inside_Class()
    {
        cout << "Enter Two Numbers: \n";
        cin >> a >> b;
        cout << a << " " << b << "\n";
    }
};

int main()
{
    A obj;
    obj.Inside_Class();
    return 0;
}

