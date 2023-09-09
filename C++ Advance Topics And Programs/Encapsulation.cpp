#include <iostream>
using namespace std;

class thief
{
    // All the Data Member is Private Because We use Encapsulation in this Program...
    string name, address, mobile_no;

public:
    // All the Private Data Members is Used in Public Member functions...
    void input()
    {
        name = "Ram Pal";
        address = "Chandigrah Group of College (Gate No - 1)";
        mobile_no = "8307306255";
    }
    void print()
    {
        cout << "\nThief Access his Important Information... \n \n";
    }

    void output()
    {
        cout << "Name = " << name << "\n \n";
        cout << "Address = " << address << "\n \n";
        cout << "Mobile Number = " << mobile_no << "\n \n";
    }
};

class police: public thief 
{
public:
    void show()
    {
        cout << "\nPolice Access Thief Important Information... Using Public Member functions of thief Class \n \n";
    }
};

int main()
{
    thief obj1;
    obj1.input();
    obj1.print();
    obj1.output();
    police obj2;
    obj2.show();
    obj2.input();
    obj2.output();
    return 0;
}