#include <iostream>
using namespace std;
// Funtion Overriding -- Late Binding (Dynamic Binding) -- Runtime Time Polymorphism
class A{
public:
     virtual void print(){
        cout << "Good Morning \n";
    }

    void show(){
        cout<<"Hi \n";
    }
};

class B : public A{
public:
     void print(){
        cout << "Good Night \n";
    }

    void show(){
        cout<<"Hello \n";
    }
};

int main(){

    B obj;
    A * ptr;
    ptr = &obj;
    ptr ->print();
    ptr->show(); // Good Morning funtion is Called with the help of Class A Pointer
    obj.show(); // Good Night Because Class A function is Override with function of Class B
    return 0;
}