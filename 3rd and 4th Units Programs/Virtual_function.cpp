#include <iostream>
using namespace std;

class A{
public:
    virtual void print()  {
        cout << "Good Night... \n";
    }

    void show(){
        cout << "Bye... \n";
    }
};

class B : public A{
public:
    void print(){
        cout << "Good Morning... \n";
    }

    void show(){
        cout << "Hello... \n";
    }
};

int main(){
    B obj;
    A * ptr;
    ptr = &obj;
    ptr->print();
    ptr->show();
    return 0;
}