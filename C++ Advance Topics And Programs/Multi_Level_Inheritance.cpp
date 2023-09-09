#include<iostream>
using namespace std;

class A{ // Base Class
   protected:
   int a, b;
   public: 
   void input(){
     cout<<"Enter First Number: \n";
     cin>>a;
     cout<<"Enter Second Number: \n";
     cin>>b;
   }
};

class B: public A{  //Derived Class
    public:
    void add(){
        cout<<"Sum is " <<a+b <<endl;
    }
    void sub(){
        cout<<"Sub is " <<a-b <<endl;
    }
};

class C: public B{ //Derived Class
      float c;
      public:
      void multi(){
        cout<<"Multi is " <<a*b <<endl;
      }
      void div(){
         c = a/b;
         cout<<"Div is " <<c;
      }
};

int main(){
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();
    return 0;
}