#include <iostream>
#include<conio.h>
using namespace std;

void fibonacci(double n)
{
    double a = 0, b = 1, c;
    cout << a << "\n"
         << b << '\n';
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        cout << c << "\n";
        a = b;
        b = c;
    }
    cout << "\n";
}

void Tribonacci(double n)
{
    double x = 0, y = 0, z = 1, v;
    cout << x << "\n"
         << y << "\n"
         << z << "\n";
    for (int i = 3; i <= n; i++)
    {
        v = x + y + z;
        cout << v << "\n";
        x = y;
        y = z;
        z = v;
    }
}

int main()
{
    double n;
    cout << "Enter a Number of Terms You Wants to Print in fibonacci and Tribonacci: \n";
    cin >> n;
    cout << "fibonacci Terms: \n";
    fibonacci(n);
    cout << "Tribonacci Terms: \n";
    Tribonacci(n);
   getch();
}