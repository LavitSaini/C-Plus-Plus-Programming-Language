#include <iostream>
using namespace std;

class A{
    int a, b;
    void input(int x, int y){
        a = x;
        b = y;
    }
    friend class B;
};

class B{
    int x, y, z;
public:
    void print(A &ref){
        cout << "Enter First Number: \n";
        cin >> x;
        cout << "Enter Second Number: \n";
        cin >> y;
        ref.input(x, y);
        z = ref.a + ref.b;
        cout << "Sum of Two Numbers is: " << z;
    }
};

int main(){
    A obj1;
    B obj2;
    obj2.print(obj1);
    return 0;
}