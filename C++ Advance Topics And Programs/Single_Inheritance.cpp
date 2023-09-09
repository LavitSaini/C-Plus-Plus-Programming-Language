#include<iostream>
using namespace std;
// Single Inheritance
class A{ //Base Class
   protected:
   string student_name;
   int roll_no;
   public:
   void input(){
         student_name = "Harjinder Singh";
         roll_no = 2210038;
   }

};

class B: public A{ //Derived Class
    string teacher_name;
    int age;
    public:
    void show(){
        teacher_name = "Poonam Mam";
        age = 25;
        cout<<endl <<"Teacher Name: " <<teacher_name <<endl <<endl;
        cout<<"Teacher Age: " <<age <<endl <<endl;
        cout<<"Student Name: " <<student_name <<endl <<endl;
        cout<<"Student Roll Number: " <<roll_no <<endl <<endl;
    }
};

int main(){
    B obj;
    obj.input();
    obj.show();
    return 0;
}
