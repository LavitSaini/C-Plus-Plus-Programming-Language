#include <iostream>
#include<conio.h>
using namespace std;

struct Students_SecA
{
    char SecA_Stds_name[30];
    int SecA_Stds_roll_no;
    int SecA_Stds_marks;
};

int main()
{
    Students_SecA s1;
    cout << "\n";
    cout << "Enter SecA Students Data: \n";
    for (int i = 1; i <= 5; i++)
    {
        cout<<"\n";
        cout << "Enter " << i << " Student Name: ";
        cin >> s1.SecA_Stds_name;
        cout << "Enter " << i << " Student Roll Number: ";
        cin >> s1.SecA_Stds_roll_no;
        cout << "Enter " << i << " Student Marks: ";
        cin >> s1.SecA_Stds_marks;
        cout << "\n";
        cout << i << " Student Data: \n";
        cout << "Student Name: " << s1.SecA_Stds_name << "\n"
             << "Student Roll Number: " << s1.SecA_Stds_roll_no << "\n"
             << "Student Marks: " << s1.SecA_Stds_marks << "\n";
    }
   getch();
}