#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a Number: \n";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        cout << "Perfect Number";
    }
    else
    {
        cout << "Not Perfect Number";
    }
    getch();
}