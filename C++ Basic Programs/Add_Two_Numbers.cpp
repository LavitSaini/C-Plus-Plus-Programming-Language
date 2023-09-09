#include <iostream>
#include<conio.h>
using namespace std;

int Add_Two_Numbers(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    cout << "Enter Two Numbers: ";
    cin >> x >> y;
    int res = Add_Two_Numbers(x, y);
    cout << "Sum is " << res;
   getch();
}