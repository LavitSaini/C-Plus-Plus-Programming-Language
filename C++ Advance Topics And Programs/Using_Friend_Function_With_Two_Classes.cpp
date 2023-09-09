#include <iostream>
using namespace std;

//Nice Program!!!

class B; // Class Declartion 
class A
{
    int x;
   
public:
    void input1(int n)
    {
        x = n;
    }

    friend void fetch(A &ref1, B &ref2);
};

class B
{
    int y;

public:
    void input2(int n)
    {
        y = n;
    }
    friend void fetch(A &ref1, B &ref2);
};

void fetch(A &ref1, B &ref2)
{
    cout << "Square of Given Number is: " << (ref1.x) * (ref1.x) <<"\n";
   
    cout<<"Cube of Given Number is: " <<(ref2.y) * (ref2.y) * (ref2.y) << "\n";
}

int main()
{
    int a, b;
    cout << "Enter a Number for find Square: \n";
    cin >> a;
    cout << "Enter a Number for find Cube: \n";
    cin >> b;
    // Creating Object for Both Classes
    A obj1;
    B obj2;
    // Passing Vaues in functions through Objects
    obj1.input1(a); 
    obj2.input2(b);
   
    // Passing Both Classes Object in friend Class
    fetch(obj1, obj2);
    return 0;
}