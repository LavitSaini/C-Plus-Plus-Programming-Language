#include <iostream>
#include<conio.h>
using namespace std;

float factorial(int n)
{
    float fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a Number for factorial: \n";
    cin >> n;
    float Result = factorial(n);
    cout << "factorial is " << Result;
    getch();
}