#include<iostream>
using namespace std;

class A{
    int a, b;
    public:
    void input(){
        cout<<"Enter First Number: \n";
        cin>>a;
        cout<<"Enter Second Number: \n";
        cin>>b;
    }
    friend void fetch(A &r);
};
void fetch(A &r){
    cout<<"Sum of Two Numbers is: \n" <<r.a + r.b;
}

int main(){
    A obj;
    obj.input();
    fetch(obj);
    return 0;
}