#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, r, c, s=0;
    cout << "Enter a Number: \n";
    cin >> n;
    c = n;
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
    }
    if (s == c)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not Palindrome Number";
    }
   getch();
}