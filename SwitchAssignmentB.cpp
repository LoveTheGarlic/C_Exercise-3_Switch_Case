#include<iostream>
using namespace std;

int main()
{
    char ch;
    int bal,mon;
    bal=10000;

    cout<<endl<<"Current Usable Functions for User: ";
    cout<<endl<<"For Depositing Money, enter D";
    cout<<endl<<"For Checking Balance, enter B";
    cout<<endl<<"For Withdrawal, enter W";
    cout<<endl<<"To Exit, press E"<<endl;
    cin>>ch;

    switch(ch)
    {
        case 'D':
                cout<<endl<<"Enter Amount to Deposit: ";
                cin>>mon;
                bal=bal+mon;
                cout<<endl<<"Your new Balance is: "<<bal;
                break;
        
        case 'B':
                cout<<endl<<"Your Balance is: "<<bal;
                break;

        case 'W':
                cout<<endl<<"Enter Amount to Withdraw: ";
                cin>>mon;
                bal=bal-mon;
                cout<<endl<<"Withdrawal successful, New Balance: "<<bal;
                break;

        case 'E':
                cout<<endl<<"Thank you for Banking with us! \nGood Day!";
                break;

        default:
                cout<<endl<<"Choose from the given options please";
                break;
    }
    
    return 0;
}