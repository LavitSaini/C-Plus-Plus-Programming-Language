#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
   
    // 45 67 6
    // 7 8 6
    // 7 8 9

    cout << "Enter first Matrix Elements(3x3): \n";

    for (i = 0; i < 3; i++) // rows 
    {
        for (j = 0; j < 3; j++) // col 
        {
           cout << "index " << i << " " << j << " :";
           cin >> a[i][j];
        }
    }

    cout << "\n"
         << "Enter Second Matrix Elements(3x3): \n";

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << "index " << i << " " << j << " :";
            cin >> b[i][j];
        }
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout <<"\n" <<"Sum of Two Matrix is: \n";

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

   getch();
}