#include<iostream>
using namespace std;

class A{
  public:
  int a, b;
  void print(){
    cout<<a <<" " <<b;
  }
};

int main(){
    int x, y;
    cout<<"Enter Two Numbers: \n";
    cin>>x >>y;
    A obj;
    obj.a = x;
    obj.b = y;
    obj.print();

    return 0;
}

