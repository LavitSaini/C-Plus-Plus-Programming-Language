#include<iostream>
using namespace std;
// Multi level Inheritance Define Functions Outside of the Classes
class A{ // Base Class
    protected:
    int array[100];
    int n;
   public:
   void Input_Elements_And_Print();
};

void A:: Input_Elements_And_Print(){
    cout<<"Enter the Size of Array: \n";
    cin>>n;
    cout<<"Enter the Elements of Array: \n";
    for(int i=0; i<n; i++){
      cin>>array[i];
    }

    cout<<"Array Elements: \n";
    for(int i=0; i<n; i++){
        cout<<array[i] <<"\t";
    }
    cout<<"\n";
}


class B: public A{ //Derived Class
   public:
   void Reverse();
};

void B::Reverse(){
    cout<<"Array Elements After Reverse: \n";
    for(int i=n-1; i>=0; i--){
        cout<<array[i] <<"\t";
    }
    cout<<"\n";
}

class C: public B{ //Derived Class
   public:
   void Add_Element_At_Given_Position();
};

void C::Add_Element_At_Given_Position(){
    cout<<"Array in Default form: \n";
    for(int i=0; i<n; i++){
        cout<<array[i] <<"\t";
    }
    cout<<"\n";
    int pos, elem;
    cout<<"Enter New Element: \n";
    cin>>elem;
    cout<<"Enter the Position Where You Wants to Store New Element: \n";
    cin>>pos;
    pos = pos - 1;
    array[pos] = elem;
    cout<<"Array After Adding New Elemet: \n";
    for(int i=0; i<n; i++){
        cout<<array[i] <<"\t";
    }
    cout<<"\n";
}

class D: public C{ //Derived Class

};

int main(){
    D obj;
    obj.Input_Elements_And_Print();
    obj.Reverse();
    obj.Add_Element_At_Given_Position();
    return 0;
}