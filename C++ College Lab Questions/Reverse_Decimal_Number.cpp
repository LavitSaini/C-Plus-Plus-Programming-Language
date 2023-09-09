#include<iostream>
using namespace std;

class A{
    int n, rev;
    public:

    void input(){
        cout<<"Enter a Number:";
        cin>>n;
    }

    void print(){
        while(n > 0){
            rev = n % 10;
            cout<< rev;
            n /= 10;
        }
    }

};

int main(){
    A obj;
    obj.input();
    obj.print();
    return 0;
}