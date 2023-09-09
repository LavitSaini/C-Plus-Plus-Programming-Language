#include <iostream>
using namespace std;

class X
{

public:                 //First Part

    int n, i, count = 0;

    void Even_Odd(int n)
    {
        if (n % 2 == 0)
        {
            cout << "Even Number" <<"\n";
        }
        else
        {
            cout << "Odd Number" <<"\n";
        }
    }

    void Prime(int n)
    {

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;                   // Second Part
            }
        }
        if (count == 2)
        {
            cout << "Prime Number";
        }
        else
        {
            cout << "Not Prime Number";
        }
    }
};

int main()
{
    X Obj;
    cout<<"Enter a Number:";
    cin>>Obj.n;                                      //Third Part
    Obj.Even_Odd(Obj.n);
    Obj.Prime(Obj.n);
    return 0;
}