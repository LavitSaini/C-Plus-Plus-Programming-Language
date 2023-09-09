#include <iostream>
#include<conio.h>
#include <string.h>
using namespace std;

int main()
{
    char str[30];
    cout << "Enter a Upper Case String: \n";
    cin >> str;

    strlwr(str);
    puts(str);
    getch();
}