#include<iostream>
#include <string>
using namespace std;

class Account
{
 	public:
	  Account( int);
	  void kredit(int );
	  void debit(int );
	  int getAccountBalance();
	 private:
  		int accountBalance;
};

	Account::Account( int balance)
{
 
 	if(balance>=0)
  	
	  accountBalance=balance;
else
 {
  accountBalance=0;
  cout<<"saldo anda tidak valid."<<endl;
 }
}
void Account::kredit( int balance)
	{
 	
	 accountBalance = accountBalance + balance;
	}
	
	void Account::debit( int balance)
	{
		
 	if(accountBalance>=balance)
 	
	{
  
  	accountBalance = accountBalance - balance;
	
	}
 	
	 else
 	{
  	
	  cout<<"jumlah debit melebihi jumlah saldo"<<endl;
 	}
}
	
	int Account::getAccountBalance()
{
 	return accountBalance; 
}
	int main()
{
 	cout << " Account " <<endl <<endl;
	
	cout << endl;
	Account Account1(600000);
	Account Account2(700000);
	cout << "saldo awal akun 1 : Rp. "<< Account1.getAccountBalance()<<endl;
	cout << "saldo awal akun 2 : Rp. "<< Account2.getAccountBalance() <<endl;
	cout << endl;	
	
	cout << endl;
	Account1.kredit(5000);
	Account2.kredit(2000);
	cout << "kredit akun 1 : Rp. 5000" << endl;
	cout << "kredit akun 2 : Rp. 2000" << endl;
	
	cout <<endl << "setelah kredit :" << endl <<endl;
	cout << "saldo setelah kredit akun 1 : Rp. "<< Account1.getAccountBalance()<<endl;
	cout << "saldo setelah kredit akun 2 : Rp. "<< Account2.getAccountBalance()<<endl;
	cout << endl;
	
	cout << endl;
	Account1.debit(7000);
	Account2.debit(8000);
	cout << "debit akun 1 : Rp. 7000" << endl;
	cout << "debit akun 2 : Rp. 8000" << endl;
	
	cout <<endl << "setelah debit :" << endl <<endl;
	cout << "saldo terakhir akun 1 : Rp. "<< Account1.getAccountBalance() <<",-"<< endl;
	cout << "saldo terakhir akun2 : Rp. "<< Account2.getAccountBalance() <<",-"<< endl;
	
}
