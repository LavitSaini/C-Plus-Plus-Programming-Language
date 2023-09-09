#include <iostream>
using namespace std;

int Cal(int a, int b);
int Cal(int a, int b, int c);

int Cal(int a, int b)
{
    return a + b;
}

int Cal(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    cout<<"Multiplication is: " << Cal(3, 5, 7) <<"\n";
    cout<<"Addition is: "<< Cal(6, 7);
    return 0;
}