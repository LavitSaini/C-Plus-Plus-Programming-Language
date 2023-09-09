#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[30], n;
    cout << "Enter Number of Elements You Wants in Array: \n";
    cin >> n;
    cout << "Enter Array Elements: \n";
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << "Print Array Elements in Ascending Order: \n";
    for (int j = 0; j <= n; j++)
    {
        cout << arr[j] << "\t";
    }

    cout<<"\n";

    cout << "Print Array Elements in Descending Order: \n";
    for (int k = n; k >= 0; k--)
    {
        cout << arr[k] << "\t";
    }

    getch();
}