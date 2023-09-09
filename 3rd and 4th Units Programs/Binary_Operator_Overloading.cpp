#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(){

    }
    A(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }

    A operator+(A obj)
    {
        A temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    A obj1(20, 30), obj2(40, 20), obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}