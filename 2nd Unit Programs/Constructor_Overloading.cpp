#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A()
    {
        cout << "Enter Two Numbers: \n";
        cin >> a >> b;
        cout << a << " " << b << "\n";
    }
    A(int x, int y)
    {
        a = x;
        b = y;
        cout << a << " " << b << "\n";
    }
    A(float x, float y)
    {
        a = x;
        b = y;
        cout << a << " " << b << "\n";
    }
};

int main()
{
    A obj, obj1(56, 78), obj2(5, 7);
    return 0;
}