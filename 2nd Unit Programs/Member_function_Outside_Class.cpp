#include<iostream>
using namespace std;

class A{
  int a, b;
  public:
  // funtion Declaration...
  void Outside_Class();
};

// function Defination Outside the Class...
void A::Outside_Class(){
    cout<<"Enter Two Numbers: \n";
    cin>>a >>b;
    cout<<a <<" " <<b;
}


int main(){
    A obj;
    obj.Outside_Class();
    return 0;
}