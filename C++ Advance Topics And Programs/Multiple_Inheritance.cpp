#include <iostream>
using namespace std;
int n;// Global Variable Used in Everywhere in Program... 

// Multiple Inheritance...
class A // Base Class
{
public:
    void input()
    {
        cout << "Enter a Number: ";
        cin >> n;
        cout<<"\n";
    }

    void sum()
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        cout << "Sum of Given Number is: " << sum << "\n \n";
    }
};

class B // Base Class
{
public:
    void fact()
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "factorial of Given Number is: "
             << fact << "\n \n";
    }
};

class C // Base Class
{
    protected:
    int a=0, b=1, c;
public:
    void fibonacci()
    {
        
        cout << "fibonacci Terms: \n";
        cout << a << "\n" << b << "\n";
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            cout << c << "\n";
            a = b;
            b = c;
        }
        cout << "\n \n";
    }
};

class D : public A, public B, public C //Derived Class
{
public:
    void Tribonacci();
};

void D::Tribonacci()
{
    int x = 0, y = 0, z = 1, w;
    cout << "Tribonaccci Terms: \n";
    cout << x << "\n" << y << "\n" << z << "\n";
    for (int i = 3; i <= n; i++)
    {
        w = x + y + z;
        cout << w << "\n";
        x = y;
        y = z;
        z = w;
    }
    cout<<"\n \n";
}

int main()
{
    D obj;
    obj.input();
    obj.sum();
    obj.fact();
    obj.fibonacci();
    obj.Tribonacci();
    return 0;
}