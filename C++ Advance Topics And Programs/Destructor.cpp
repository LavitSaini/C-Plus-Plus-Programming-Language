#include <iostream>
using namespace std;
int count = 0; 

class A
{
  
public:
    A() // Three Times Constructor Runs
    {
        cout << "Object " << ++count << " Created " << endl;
    }

    ~A()// Three Times Destructor Runs
    {
        cout << "Object " << count-- << " Destroyed " << endl;
    }
};

int main()
{
    //Three Objects Created;
    A obj[3];
    return 0;
}
