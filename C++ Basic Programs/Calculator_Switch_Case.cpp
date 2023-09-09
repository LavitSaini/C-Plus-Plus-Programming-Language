#include<iostream>
#include<conio.h>
using namespace std;

void Calculator(int a, int b, char c){
    switch(c){
        case '+':
        cout<<"Sum is " <<a + b;
        break;

        case '-':
        cout<<"Sub is " <<a - b;
        break;

        case 'x':
        cout<<"Multiply is " <<a * b;
        break;

        case '/':
        cout<<"Divide is " <<a / b;
        break;

        default:
        cout<<"You Enter Wrong Symbol, This Operation is Not Allowed in Calculator";
    }
}

int main(){
   int x, y;
   char z;
   cout<<"Enter (+ for Sum), (- for Sub), (x for Multiply), (/ for Divide): \n";
   cin>>z;
   cout<<"Enter Two Numbers: \n";
   cin>>x >>y;
   Calculator(x, y, z);
  getch();
}