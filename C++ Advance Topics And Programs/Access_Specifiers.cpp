#include<iostream>
using namespace std;

class A{
   //Default Private 
   int x; //Not Globally Accessable

   protected:  //Only Accessed in inherit and Declared Class
   int y; 
   
   public: // Globally Accessed
   int z;
   void print(int n){
    x = n;
    y = n;
    cout<<x <<" " <<y;
   }
};


int main(){
    A obj;
    obj.print(10);
    return 0;
}