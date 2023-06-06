#include "BankAcc.h"
#include<iostream>
using namespace std;
BankAccount::BankAccount(string owner) {
	this->owner = owner;
	this->balance = 0;
}
BankAccount::BankAccount(string owner, double balance) {
	this->owner = owner;
	if (balance > 0.0) {
		this->balance = balance;
	}
	else {
		cout << "Enter a positive balance\n";
	}
}
void BankAccount::deposit(double amount) {
	if (amount >= 0) {
		balance += amount;
	}
	else {
		cout << "You can`t deposit 0 or less\n";
	}
}
void BankAccount::withdraw(double amount) {
	if (amount >= 0 && amount <= balance) {
		balance -= amount;
	}
	else {
		cout<< "You can`t withdraw more than you have on your balance\n";
	}
}
string BankAccount::getOwner()const {
	return owner;
}
double BankAccount::getBalance()const {
	return balance;
}