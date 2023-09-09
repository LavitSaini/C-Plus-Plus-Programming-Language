#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
     // Transpose 3x3 Matrix -->

    int arr[3][3], a, b, c;
    cout << "Enter Matrix Elements(3x3): \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Print Matrix (3x3) Before Transpose: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    // Logic to Transpose Matrix Elements

    a = arr[0][1];
    b = arr[0][2];
    c = arr[1][2];

    arr[0][1] = arr[1][0];
    arr[0][2] = arr[2][0];
    arr[1][2] = arr[2][1];

    arr[1][0] = a;
    arr[2][0] = b;
    arr[2][1] = c;

     // Logic to Transpose Matrix Elements

    cout << "Print Matrix (3x3) After Transpose: \n";
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    getch();
}