#include <iostream>
using namespace std;

//Using Class Function
class A
{
  int n;

public:
  A()
  {
    cout << "Enter a Number: \n";
    cin >> n;
  }

  void display()
  {
    cout << n << endl;
  }

  //Using Decrement Operator...
  
  void operator --() // prefix
  {
    --n;
  }
  void operator --(int) // postfix
  {
    n--;
  }

  ~A()
  {
    cout << "Constructor Destroyed... \n";
  }
};

int main()
{
  A obj;
  obj--; //Postfix Calling
  obj.display();
  --obj;
  obj.display(); //Postfix Calling
  return 0;
}