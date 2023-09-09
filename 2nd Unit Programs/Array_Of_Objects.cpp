#include <iostream>
using namespace std;

class A
{
    string st_name;
    int roll_no;

public:
    void input();
    void output();
};

void A::input()
{
    cout << "\n";
    cout << "Enter Student Name: \n";
    cin >> st_name;
    cout << "Enter Student Roll Number: \n";
    cin >> roll_no;
}

void A::output()
{
    cout << "Student Name: " << st_name << endl;
    cout << "Roll Number: " << roll_no << "\n \n";
}

int main()
{
    A obj[20];
    int n;
    cout << "\nEnter Number of Students Data You Wants to Store: \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter " << i + 1 << " Student Data... \n";
        obj[i].input();
    }

    for (int j = 0; j < n; j++)
    {
        cout <<"\n" << j + 1 << " Student Data... \n";
        obj[j].output();
    }
    return 0;
}
