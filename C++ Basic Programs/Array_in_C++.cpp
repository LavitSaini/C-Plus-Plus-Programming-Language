#include <iostream>
using namespace std;

int main()
{
    int array[4];

    // Input Array Elements

    for (int i = 0; i <= 3; i++)
    {
        cout << "Enter Index " << i << ":\n";
        cin >> array[i];
    }
    // Output Array Elements

    cout << "Array Elements:"
         << "\n";

    for (int i = 0; i <= 3; i++)
    {

        cout << array[i] << "\n";
    }
    return 0;
}