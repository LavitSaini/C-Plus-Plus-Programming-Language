#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[30], n;
    cout << "Enter Number of Elements You Wants in Array: \n";
    cin >> n;

    cout << "Enter Array Elements: \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Print Array Elements in Default Order: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    cout<<"\n";

    cout << "Print Array Elements in Reverse Order: \n";
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
    getch();
}