#include <iostream>
using namespace std;

class A
{
  int a, b;

public:
  A(int x, int y)
  {
    a = x;
    b = y;
    
  }
  A(A &ref)
  {
    a = ref.a + 5;
    b = ref.b + 5;
    
  }

  void print(){
    cout << a << " " << b << endl;
  }

};

int main()
{
  int x, y;
  cout << "Enter Two Numbers: \n";
  cin >> x >> y;
  A obj1(x, y);
  obj1.print();
  A obj2 = obj1;
  obj2.print();
}