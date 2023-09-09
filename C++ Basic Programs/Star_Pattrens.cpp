#include <iostream>
#include<conio.h>
using namespace std;

void Star_Pattren_1()
{
    cout << "\n"
         << "Pattren Number 1: \n"
         << "\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void Star_Pattren_2()
{
    cout << "\n"
         << "Pattren Number 2: \n"
         << "\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void Star_Pattren_3()
{
    cout << "\n"
         << "Pattren Number 3: \n"
         << "\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i == 1 && (j == 5) || i == 2 && (j == 5 || j == 6 || j == 4) || i == 3 && (j == 5 || j == 6 || j == 4 || j == 3 || j == 7) || i == 4 && (j == 5 || j == 6 || j == 4 || j == 3 || j == 2 || j == 7 || j == 8) || i == 5 && (j == 5 || j == 6 || j == 4 || j == 3 || j == 2 || j == 7 || j == 8 || j == 1 || j == 9))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}

void Star_Pattren_4()
{
    int count = 1;
    cout << "\n"
         << "Pattren Number 4: \n"
         << "\n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    Star_Pattren_1();
    Star_Pattren_2();
    Star_Pattren_3();
    Star_Pattren_4();
    getch();
}