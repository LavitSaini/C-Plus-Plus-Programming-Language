#include <iostream>
using namespace std;

class A{
public:
    virtual void show() = 0;
    void display(){
        cout << "Base Class... \n";
    }
};

class B : public A{
public:
    void show(){
        cout << "Derive Class... \n";
    }
};

int main(){
    B obj;
    A *ptr;
    ptr = &obj;
    ptr->display();
    ptr->show();
    return 0;
}