#include<iostream>
using namespace std;

class demo {
    private:
    int a, b;

    public:
    void input(){
        cout<<"Enter Two Numbers: \n";
        cin>>a >>b;
    }
    
    void print(){
       cout<<a <<" " <<b <<"\n";
    }
};

int main(){
   demo ob;
   ob.input();
   ob.print();
   ob.input();
   ob.print();
   return 0;
}