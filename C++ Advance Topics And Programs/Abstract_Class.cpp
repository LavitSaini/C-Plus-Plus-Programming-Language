#include <iostream>
using namespace std;

class A
{
    virtual void Vir_fun() = 0;
    public:
    void show(){
        cout<<"This is a Abstract Class... \n";
    }
};

class B: public A
{
public:
    void Vir_fun()
    {
        cout << "This Program is Example of Abstract Class... \n";
    }
};

int main()
{
    B obj;
    obj.Vir_fun();
    obj.show();
    return 0;
}