#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    char str[30];
    cout << "Enter a Lower Case String: \n";
    cin >> str;
    
    strupr(str);
    puts(str);
    getch();
}