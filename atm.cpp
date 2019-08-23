#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	start:
    int balance=0;
    int pin;
    cout<<"enter the pin";
    cin>>pin;
    if(pin<=999)
    {
    cout<<"incorrct pin";
    return 0;
    }
    cout<<"What do you want?:"<<endl;
    cout<<"1- Check your balance"<<endl;
    cout<<"2- Deposit"<<endl;
    cout<<"3- Withdraw"<<endl;
    int option,deposit_money,withdraw;
    cin>>option;
    switch (option)
    {
    case 1:
    cout<<"Your balance is"<<balance;

        break;
    case 2:
    cout<<"How much money do you want to deposit"<<endl;
    cin>>deposit_money;
    balance=balance+deposit_money;
    cout<<"your current balance : "<<balance;
    break;
    case 3:
    cout<<"Enter the amount do you want to withdraw";
    cin>>withdraw;
    if(withdraw>balance)
    {
    	cout<<"Insufficient balance";
	}
    balance=balance-withdraw;
    cout<<"Your current balance is "<<balance;
    break;
    default:
        break;
    }
    int again;
    cout<<"\n Do you want another transaction \t\t YES : 1 \t\t\t NO: 0 "<<endl;
    cin>>again;
    if(again==1)
    {
    	goto start;
    	
	}
	else if(again==0)
	cout<<"Thanks for being here ";
	return 0;
}
