#include <iostream>
#include<conio.h>
using namespace std;

void natural_numbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a Number: \n";
    cin >> n;
    natural_numbers(n);
    getch();
}