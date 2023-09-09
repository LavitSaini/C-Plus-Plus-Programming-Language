#include<iostream>

namespace A{
    int a = 10;
    void print(){
        std::cout<<a <<"\n";
    }
}

namespace B{
    int a = 20;
    void print(){
        std::cout<<a <<" ";
    }
}

int main(){
    A::print();
    B::print();
    return 0;
}