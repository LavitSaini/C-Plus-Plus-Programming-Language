#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a Number: \n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum is " << sum;
   getch();
}