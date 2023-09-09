#include <iostream>
using namespace std;

class A
{
public:
  void fun1()
  {
    cout << "\n1.) function with No Argument And No Return Value \n \n";
  }

  void fun2(int n)
  {
         cout<< "2.) function with Argument But No Return Value \n";
         cout << n << "\n \n";
  }

  int fun3()
  {
   
         cout<< "3.) function with No Argument But Return Value \n";
    int a = 5, b = 10;
    return a + b;
  }

  int fun4(int x, int y)
  {
        cout << "4.) function with Argument And Return Value \n";
    cout << x << " " << y <<" ";
    return x * y;
  }
};

int main()
{
  A obj;
  obj.fun1();
  obj.fun2(10);
  cout << obj.fun3() << endl <<endl;
  cout << obj.fun4(8, 9) << endl <<endl;
  return 0;
}