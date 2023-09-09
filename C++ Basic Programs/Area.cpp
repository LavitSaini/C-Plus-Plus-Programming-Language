#include <iostream>
#include<conio.h>
using namespace std;
#define pi 3.14

void Cricle(int r)
{
    int Area = pi * r * r;
    cout << "Area of Circle: " << Area << "\n";
}

void Square(int a)
{
    int Area = a * a;
    cout << "Area of Square: " << Area << "\n";
}

void Rectangle(int l, int b)
{
    int Area = l * b;
    cout << "Area of Rectangle: " << Area << "\n";
}

int main()
{
    int r;
    cout << "Enter Radius of Cricle: \n";
    cin >> r;
    Cricle(r);

    int a;
    cout << "Enter the Side of Square: \n";
    cin >> a;
    Square(a);

    int l, b;
    cout << "Enter the Length of Rectangle: \n";
    cin >> l;
    cout << "Enter the Breath of Recangle: \n";
    cin >> b;
    Rectangle(l, b);

   getch();
}