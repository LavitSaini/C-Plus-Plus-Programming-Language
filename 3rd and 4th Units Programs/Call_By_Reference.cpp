#include <iostream>
using namespace std;

class A{
public:
    A(float *a, float *b)
    {
        float swap;
        swap = *a;
        *a = *b;
        *b = swap;
    }
};

int main(){
    float x, y;
    cout<<"Enter Two Numbers: \n"; cin>>x >>y;

    cout<<"Before Swap: \n";
    cout<<x <<" " <<y;

    cout<<"\nAfter Swap: \n";
    A obj(&x, &y);
    cout<<x <<" " <<y;
    return 0;
}