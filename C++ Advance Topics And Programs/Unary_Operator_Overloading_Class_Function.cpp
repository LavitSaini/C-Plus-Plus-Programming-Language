#include<iostream>
using namespace std;

class A{
   unsigned int n;
   public:
   A(){
    n = 5;
   }  
   int getdata(){
    return n;
   }
   void operator --(){ //perfix
    --n;
   }
   ~A(){
    cout<<"Constructor Destroyed \n";
   }
};

int main(){
    A obj1, obj2;
    cout<<"Value of n through first Object: " <<obj1.getdata() <<"\n";
    cout<<"Value of n through Second Object: " <<obj2.getdata() <<"\n";
    //prefix
    --obj1;
    --obj2;
    --obj2;
    cout<<"The final Value of n through first Object: " <<obj1.getdata() <<"\n";
    cout<<"The final Value of n through Second Object: " <<obj2.getdata() <<"\n";

    return 0;
}