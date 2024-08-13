#include<iostream>
using namespace std;
class Bank
{
	int amout,withdraw,deposite;
	double acc_num;
	string name,acc_type;
	
	public:
		void assign(int acc_num,int amount,string name,string acc_type)
		{
			this->acc_num = acc_num;
			this->amout = amount;
			this->name = name;
			this->acc_type = acc_type;
			cout<<"\n your balance is:"<<amout;
		}
		void deposit(int deposite)
		{
			this->deposite = deposite;
			amout = amout + this->deposite;
			cout<<"\n\nYou deposite:"<<deposite;
			cout<<"\ntotal balance is:"<<amout;
		}
		void withdrow(int withdraw)
		{
			this->withdraw = withdraw;
			
			amout = amout-this->withdraw;
			cout<<"\n\nYou withdraw:"<<withdraw;
			cout<<"\nAfter withdraw balance is :"<<this->amout;
		}
		void display()
		{
			cout<<"\n\nAccount Holder name is :"<<name;
			cout<<"\nAccount Balance is:"<<amout;
			
		}	
};
int main()
{
	Bank b1;
	int balance,deposit,withdraw;
	double acc_num;
	string name,acc_type;
	cout<<"\nEnter Name:";
	cin>>name;
	
	cout<<"\nEnter Account Number:";
	cin>>acc_num;
	
	cout<<"\nEnter Account Type:";
	cin>>acc_type;
	
	cout<<"\nEnter Account Balance:";
	cin>>balance;
	
	b1.assign(acc_num,balance,name,acc_type);
	cout<<"\nEnter How many ruppe you are deposited..:";
	cin>>deposit;
	
	b1.deposit(deposit);
	cout<<"\nEnter How many ruppe you are Withdraw..:";
	cin>>withdraw;
	
	b1.withdrow(withdraw);
	b1.display();	
}
