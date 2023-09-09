#include <iostream>
using namespace std;

class MyBank
{
    int Bal, Atm_Pin;

public:
    string Bank_Name, IFSC_Code;
    int Account_Number;

    void input()
    {
        Bal = 4000000;
        Atm_Pin = 4466;
        Bank_Name = "State Bank of India";
        IFSC_Code = "SBI012345";
        Account_Number = 447783219;
    }

    void output(){
        cout<<"\nMy Bank Details... \n \n";
        cout<<"Bank Name: " <<Bank_Name <<"\n \n";
        cout<<"IFSC Code: " <<IFSC_Code <<"\n \n";
        cout<<"Account Number: " <<Account_Number <<"\n \n";
        cout<<"Balance: " <<Bal <<"\n \n";
        cout<<"Atm Pin: " <<Atm_Pin <<"\n \n";
    }
};


int main(){
    MyBank obj;
    obj.input();
    obj.output();
    cout<<"My bank Details Accessed By Other Person... \n \n";
    cout<<"Bank Name: " <<obj.Bank_Name <<"\n \n";
    cout<<"IFSC Code: " <<obj.IFSC_Code <<"\n \n";
    cout<<"Account Number: " <<obj.Account_Number <<"\n \n";
    cout<<"Atm Pin OR Bank Balance is Not Accessed By Other Person Because they are Private..." <<"\n \n";
    return 0;
}