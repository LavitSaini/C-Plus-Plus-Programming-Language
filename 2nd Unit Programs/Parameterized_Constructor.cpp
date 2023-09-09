#include <iostream>
using namespace std;

class A
{
public:
    A(int arr[], int n)
    {
        int max = 0;
        cout << "Enter Array Elements: \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << "The Maximum Element of Array is: " << max;
    }
};

int main()
{
    int array[30], n;
    cout << "Enter the Size of Array: \n";
    cin >> n;
    // Two TypeS of Calling in Parameterized Constructor
    // 1.) Implict Calling
    // 2.) Explicit Calling
    // A obj(array, n);  Implict Calling
    A obj = A(array, n); // Explicit Calling
    return 0;
}