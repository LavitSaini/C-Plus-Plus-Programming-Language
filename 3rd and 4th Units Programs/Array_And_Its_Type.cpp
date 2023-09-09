#include <iostream>
using namespace std;

class A
{
    int arr[20];

protected:
    int m;

public:
    void input1(int n)
    {
        m = n;
        cout << "Enter One Dimensional Array Elements: \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void display1()
    {
        cout << "Elements of One Dimensional Array: \n";
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << "\t";
        }
        cout<<"\n";
    }
};

class B : public A
{
    int array[10][10], a, b;

public:
    void input2(int x, int y)
    {
        a = x;
        b = y;
        cout << "Enter Multi Dimensional Array Elements: \n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> array[i][j];
            }
        }
    }

    void display2()
    {
        cout << "Elements of Multi Dimensional Array: \n";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << array[i][j] <<" ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int p, q, r;
    cout << "Enter One Dimensional Array Size: \n";
    cin >> r;
    cout << "Enter Number of Rows (Multi Dimensional Array): \n";
    cin >> p;
    cout << "Enter Number of Columns (Multi Dimensional Array): \n";
    cin >> q;
    B obj;
    // One Dimensional Array...
    obj.input1(r);
    obj.display1();

    // Multi Dimensional Array...
    obj.input2(p, q);
    obj.display2();

    return 0;
}