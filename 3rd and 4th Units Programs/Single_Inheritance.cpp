#include <iostream>
using namespace std;

class A{
public:
    void Base()
    {
        cout << "\nBase Class function... \n";
    }
};

class B : public A{
    public:
    void Derive()
    {
        cout << "\nDerive Class function... \n\n";
    }
};

int main(){
    B obj;
    obj.Base();
    obj.Derive();
    return 0;
}