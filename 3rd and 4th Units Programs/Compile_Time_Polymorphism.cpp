#include <iostream>
using namespace std;

class A
{
public:
    void print(int a, int b, int c)
    {
        cout << a << " " << b << " " << c << endl;
    }

    void print(float a, float b)
    {
        cout << a << " " << b << endl;
    }
    void print(char ch)
    {
        cout << ch << endl;
    }
};

int main()
{
    A obj;
    obj.print('A');
    obj.print(2.2, 3.3);
    obj.print(2, 3, 4);
    return 0;
}