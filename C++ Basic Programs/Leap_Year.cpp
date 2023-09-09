#include <iostream>
#include<conio.h>
using namespace std;

void Leap_Year(int y)
{
    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
    {
        cout << "Leap Year!";
    }
    else
    {
        cout << "Not Leap Year!";
    }
}

int main()
{
    int y;
    cout << "Enter a Year: \n";
    cin >> y;
    Leap_Year(y);
    getch();
}