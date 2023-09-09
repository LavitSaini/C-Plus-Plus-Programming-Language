#include <iostream>
using namespace std;

class A{

protected:
    int x, y;

public:
    void print(){
        cout << "\nProgram to Add Two Numbers Using Hybrid Inheritance... \n \n";
    }
};

class B : public A{ // Single Inheritance...

public:
    void input1(){
        cout << "Enter First Number: \n";
        cin >> x;
    }
};

class C : public B{ // Multi level Inheritance... (Level 1)

public:
    void input2(){
        cout << "\nEnter Second Number: \n";
        cin >> y;
    }
};

class D : public C{ // Multi level Inheritance... (Level 2)

public:
    void Add(){
        cout << "\nSum  is : " << x + y <<"\n \n";
    }
};

int main(){
    D obj;
    obj.print();
    obj.input1();
    obj.input2();
    obj.Add();
    return 0;
}
