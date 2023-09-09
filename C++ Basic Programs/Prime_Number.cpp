#include <iostream>
#include<conio.h>
using namespace std;

void Prime_Number(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime Number";
    }
}

int main()
{
    int n;
    cout << "Enter a Number: \n";
    cin >> n;
    Prime_Number(n);
    getch();
}