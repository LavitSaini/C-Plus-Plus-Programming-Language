#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char str1[20], str2[20];
    cout << "Enter a String: \n";
    cin >> str1;

    strcpy(str2, str1);
    strrev(str1);
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
    {
        cout << "Entered String is Palindrome String";
    }
    else
    {
        cout << "Entered String is not Palindrome String";
    }
    getch();
}