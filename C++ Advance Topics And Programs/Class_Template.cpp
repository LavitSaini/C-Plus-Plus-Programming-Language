#include <iostream>
using namespace std;
template <class A>

class B
{
public:
    B(A x, A y)
    {
        cout << x << " " << y << "\n";
    }
};

int main(){
    B <int> obj(400, 700);
    B <float> obj1(4.5, 5.5);
    B <string> obj2("Hello", "World");
    return 0;
}