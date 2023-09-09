#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        int n;
        cout << "Enter a Number: \n";
        cin >> n;
        for (int i = 1; i <= 10; i++)
        {
            cout << n << "x" << i
                 << "="
                  << n * i <<"\n";
        }
    }
};

int main()
{
    A obj;
    return 0;
}