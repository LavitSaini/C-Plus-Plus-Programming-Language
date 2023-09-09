#include <iostream>
#include<conio.h>
using namespace std;

void Even_Odd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
}

int main()
{
    int n;
    cout << "Enter a Number:";
    cin >> n;
    Even_Odd(n);
   getch();
}