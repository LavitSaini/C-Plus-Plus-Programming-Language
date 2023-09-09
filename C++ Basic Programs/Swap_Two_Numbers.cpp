#include <iostream>
#include<conio.h>
using namespace std;

void Swap(int x, int y)
{
    int c;
     c = x;
     x = y;
     y = c;
     cout<<"Print Numbers After Swap: \n";
     cout<<x <<" " <<y;
}

int main()
{
    int a, b;
    cout << "Enter first Number: \n";
    cin >> a;
    cout << "Enter Second Number: \n";
    cin >> b;

    cout << "Print Number Before Swap: \n"
         << a << " " << b << "\n";
    Swap(a, b);
   getch();
}