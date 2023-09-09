#include <iostream>
using namespace std;
// Function Overloading -- Early Binding(Static Binding) -- Compile Time Polymorphism
class A
{
public:
    void Compile(string name)
    {
        cout << name << endl;
    }
    void Compile(int a, int b)
    {
        cout << "Addition is: " << a + b << endl;
    }
    void Compile(int n)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << n << "x" << i << "=" << n * i << endl;
        }
    }
};

int main()
{
    A obj;
    string name;
    cout << "Enter Any Name: \n";
    cin >> name;
    int a, b, n;
    cout << "Enter Two Numbers: \n";
    cin >> a >> b;
    cout << "Enter a Number for Table: \n";
    cin >> n;
    obj.Compile(name);
    obj.Compile(a, b);
    obj.Compile(n);
    return 0;
}
