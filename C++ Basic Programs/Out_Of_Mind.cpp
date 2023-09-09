#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, n;
    int *ptr;
    ptr = &a;
    cout << "Enter: \n";
    cin >> a;
    cout << "Value of a is " << a <<"\n";
    if (*(ptr) == a)
    {
        cout << "Enter: \n";
        cin >> n;
        a = n;
        cout << "Now a Value is " << a;
    }
    else
    {
        cout << "Program fail";
    }
    getch();
}