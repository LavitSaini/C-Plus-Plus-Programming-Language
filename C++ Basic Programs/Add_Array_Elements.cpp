#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[30], n, sum=0;
    cout << "Enter Number of Elements You Wants in Array: \n";
    cin >> n;

    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
       sum = sum + arr[j];
    }

    cout<<"Sum of All Array Elements is: " <<sum;
    getch();
}