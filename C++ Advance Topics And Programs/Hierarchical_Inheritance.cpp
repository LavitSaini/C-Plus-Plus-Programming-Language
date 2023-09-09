#include <iostream>
using namespace std;

class A
{ // Base Class
protected:
    int a[10][10], b[10][10], x, y;

public:
    void input()
    {
        cout << "Enter Both Arrays Sizes for Rows and Columns: \n \n";
        cout << "Enter Arrays Rows: \n";
        cin >> x;
        cout << "Enter Arrays Columns: \n";
        cin >> y;
        cout << "Enter First Array Elements: \n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "\n";
        cout << "Enter Second Array Elements: \n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    void print()
    {
        cout << "Print First Array Elments in Matrix Form: \n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << a[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "Print Second Array Elments in Matrix Form: \n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << b[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }
};

class B : public A
{ // Derived Class
    int c[10][10];

public:
    void Add()
    {
        cout << "Addition of Two Arrays: \n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << c[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }
};

class C : public A
{ // Derived Class
    int d[10][10];

public:
    void Multi()
    {
        cout << "Multiplication of Two Arrays: \n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                d[i][j] = a[i][j] * b[i][j];
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << " " << d[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }
};

int main()
{
    B obj1; //Class B Object Created
    C obj2; //Class C object Created
    //Input and Print functions Called from Class A using Class B Object(obj1) Because Class B Hierarchical Inheritance in Class A...
    obj1.input();
    obj1.print();
    obj1.Add();

    // Again Input and Print functions Called from Class A using Class C Object(obj2) Because Class C Hierarchical Inheritance in Class A...
    obj2.input();
    obj2.print();
    obj2.Multi();
    return 0;
}