#include<iostream>
using namespace std;
template <class A>

void Any(A x, A y){
    cout<<x <<" " <<y <<endl;
}

int main(){
    // Input Any Types of Data With Arguments Using Template function...
    Any(3, 5);
    Any(6.7, 8.9);
    Any('A', 'v');
    Any("Hello", "World");
    return 0;
}
