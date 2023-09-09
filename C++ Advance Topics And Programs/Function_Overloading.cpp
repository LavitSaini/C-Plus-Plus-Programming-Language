#include <iostream>
using namespace std;

class A
{
public:
    void fun_Overloading()
    {
        cout << "Function Without Parameters is Runed... \n";
    }
    void fun_Overloading(int x, int y)
    {
        if (x > y)
        {
            cout << "Number is Greater: " << x << endl;
        }
        else
        {
            cout << "Number is Greater: " << y << endl;
        }
    }

    void fun_Overloading(int a, float b, double c)
    {
        if (a < b)
        {
            if (c < b)
            {
                cout << "Greatest Number is: " << b;
            }
            else
            {
                cout << "Greatest Number is: " << c;
            }
        }
        else
        {
            if (a > c)
            {
                cout << "Greatest Number is: " << a;
            }
            else
            {
                cout << "Greatest Number is: " << c;
            }
        }
    }
};

int main()
{
    int p, q, a, b, c;
    cout << "Enter Two Numbers: \n";
    cin >> p >> q;
    cout << "Enter First Number: \n";
    cin >> a;
    cout << "Enter Second Number: \n";
    cin >> b;
    cout << "Enter Third Number: \n";
    cin >> c;
    A obj;
    obj.fun_Overloading();
    obj.fun_Overloading(p, q);
    obj.fun_Overloading(a, b, c);
    return 0;
}