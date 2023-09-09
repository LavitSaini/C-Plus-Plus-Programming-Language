#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A(int a, int b)
    { // Default Constructor
        x = a;
        y = b;
        cout << x << " " << y << "\n";
    }
    
    // Here ref is Reference Variable for Accessing Values from Another Constructor.
    // Without Refrence Variable Impossible to Copy the Values from One Constructor to Another.

    A(A &ref) //Cpoy Constructor
    {
        x = ref.x + 5; 
        y = ref.y + 5;
        cout << x << " " << y;
    }
};

int main()
{
    int m, n;
    cout<<"Enter First Number: \n";
    cin>>m;
    cout<<"Enter Second Number: \n";
    cin>>n;
    A obj(m, n);
    A obj1 = obj;
    return 0;
}