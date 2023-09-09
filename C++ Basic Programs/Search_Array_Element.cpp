#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[30], n, j, sear;
    cout << "Enter Size of Array: \n";
    cin >> n;

    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Element thats You wants to Search in Array: \n";
    cin >> sear;

    for (j = 0; j < n; j++)
    {
        if (arr[j] == sear)
        {
            cout << "Element found in Array at Position: " << j + 1;
            break;
        }
    }

    getch();
}