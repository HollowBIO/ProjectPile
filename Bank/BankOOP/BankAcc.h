#ifndef BANKACC_H
#define BANKACC_H
#include <string>
using namespace std;

class BankAccount {
public:
	BankAccount(string owner);
	BankAccount(string owner, double balance);
	void deposit(double amount);
	void withdraw(double amount);
	string getOwner()const;
	double getBalance()const;
private:
	string owner;
	double balance;
};
#endif 

