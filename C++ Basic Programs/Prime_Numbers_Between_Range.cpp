#include <iostream>
#include<conio.h>
using namespace std;

void Prime_Number(int x, int y)
{
    int count;
    for (int j = x; j <= y; j++)
    {
        count = 0;
        for (int i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << j <<endl;
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter first Number of Range: \n";
    cin >> a;
    cout << "Enter Second Number of Range: \n";
    cin >> b;
    Prime_Number(a, b);
   getch();
}