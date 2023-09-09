#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[30], n, elem, pos;
    cout << "Enter Number of Elements You Wants in Array: \n";
    cin >> n;
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter New Elements thats You Wants to Insert: \n";
    cin >> elem;

    cout << "Enter Position Where You Wants to Store New Elements (Note - Positons of Array Starts from 0 index): \n";
    cin >> pos;
    pos = pos - 1;
    arr[pos] = elem;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "\t";
    }

   getch();
}