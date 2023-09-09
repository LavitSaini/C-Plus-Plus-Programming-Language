#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first Number: \n";
    cin >> a;
    cout << "Enter Second Number: \n";
    cin >> b;

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    cout << &a << "\t=\t" << ptr1 << "\t | \t" << &b << "\t=\t" << ptr2 << "\n";
    // ptr1 Holds variable a Address
    // ptr2 Holds variable b Address
    cout << "Sum of Two Number Using Pointer is: " << *(ptr1) + *(ptr2);
   getch();
}