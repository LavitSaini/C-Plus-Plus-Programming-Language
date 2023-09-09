#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, c, r, arm = 0;
    cout << "Enter a Number: \n";
    cin >> n;
    c = n;

    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }

    if (arm == c)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong Number";
    }

    getch();
}