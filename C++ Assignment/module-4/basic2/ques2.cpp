// Define a class to represent a bank account. Include the following members:
//  Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
//
//  Member Functions:
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance

#include<iostream>
using namespace std;
class Bank_Account
{
    private:
    int acc,amount,add_amt=0,total_amt,withdrawn=0;
    string name,type_acc;
    public:
    void get_data()
    {
        cout<<"Enter Name Of Depositior: "<<endl;
        cin>>name;
        cout<<"Enter Account Number: "<<endl;
        cin>>acc;
        cout<<"Enter The Type Of Account: "<<endl;
        cin>>type_acc;
        cout<<"Enter Balance Amount: "<<endl;
        cin>>amount;
    }
    void deposit()
    {
        int choice;
        cout<<"Current Balance: "<<amount<<endl;
        cout<<"Want To Deposit?"<<endl;
        cout<<"1.Yes"<<endl;
        cout<<"1.No"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter Amount Of Deposit: "<<endl;
            cin>>add_amt;
            break;
            case 2:
            cout<<"Current Balance: "<<amount<<endl;
            break;
            default :
            cout<<"Invalid choice!!";
        }  
    }

    void withdrawn()
    {
        int choice1;
        cout<<"Current Balance: "<<amount<<endl;
        cout<<"Want To Withdraw?"<<endl;
        cout<<"1.Yes"<<endl;
        cout<<"1.No"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>choice1;
        switch(choice1)
        {
            case 1:
            cout<<"Enter Amount For Withdraw: "<<endl;
            cin>>withdrawn;
            break;
            case 2:
            cout<<"Current Balance: "<<amount<<endl;
            break;
            default :
            cout<<"Invalid choice!!";
        }  
    }
    void display()
    {
        cout<<"Name Of Depositor: "<<name<<endl;
        total_amt=amount+add_amt-withdrawn;
        cout<<"Current Balance: "<<total_amt<<endl;
    }


};
int main()
{
    Bank_Account b1;
    b1.get_data();
    b1.deposit();
    b1.withdrawn();
    b1.display();
}