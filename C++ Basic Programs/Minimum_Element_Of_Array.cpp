#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[50], n, min;
    cout << "Enter the Size of Array: \n";
    cin >> n;

    cout << "Enter Elements of Array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    min = arr[0];

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
    }

    cout << "Minimum Element of Array is: " << min;
    getch();
}