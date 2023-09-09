#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int marks[4];
    int Total = 0;
    cout << "Enter Student Marks--> \n";
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter " << i+1 << " Subject Marks: \n";
        cin >> marks[i];
    }

    for (int j = 0; j <= 4; j++)
    {
        Total = Total + marks[j];
    }
    cout << "Total Marks of Student: " << Total <<endl;

    float avg = Total / 5;
    cout << "Average of Student Marks: " << avg <<"%";
    getch();
}