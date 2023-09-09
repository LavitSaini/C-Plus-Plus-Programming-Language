#include <iostream>
#include<conio.h>
using namespace std;

void Reverse(int n)
{
    int rev;
    while (n > 0)
    {
        rev = n % 10;
        cout << rev;
        n = n / 10;
    }
}

int main()
{
    int n;
    cout << "Enter a Number for Reverse: \n";
    cin >> n;
    Reverse(n);
    getch();
}