#include <iostream>
#include "BankAcc.h"
int ActionChoise();
using namespace std;
int main() {
	bool check = false, run = true;
	int AccActive, action;
	char keepGoing;
	double amount;
	BankAccount Acc1("Oleg");
	BankAccount Acc2("Vladick", 200);
	cout << "=====================\n";
	cout << "Welcome to RofloBank\n";
	while (run) {
		cout << "Select account you wish to work with\n";
		cout << "1." << Acc1.getOwner() << '\n';
		cout << "2." << Acc2.getOwner() << '\n';
		cout << "3.Quit\n";
		cin >> AccActive;
		if (AccActive == 1) {
			action = ActionChoise();
			if (action == 1) {
				while (check == false) {
					double depcheck;
					depcheck = Acc1.getBalance();
					cout << "Enter amount you wish to deposit:";
					cin >> amount;
					Acc1.deposit(amount);
					if (Acc1.getBalance() >= depcheck) {
						check = true;
					}
				}
				cout << Acc1.getOwner() << "`s balance now is " << Acc1.getBalance() << "$\n";
				check = false;
			}
			else if (action == 2) {
				while (check == false) {
					double depcheck;
					depcheck = Acc1.getBalance();
					cout << "Enter amount you wish to withdraw:";
					cin >> amount;
					Acc1.withdraw(amount);
					if (Acc1.getBalance() <= depcheck) {
						check = true;
					}
				}
				cout << Acc1.getOwner() << "`s balance now is " << Acc1.getBalance() << "$\n";
				check = false;
			}
			else if (action == 3) {
				cout << "Bye\n";
			}
		}
		else if (AccActive == 2) {
			action = ActionChoise();
			if (action == 1) {
				while (check == false) {
					double  depcheck;
					depcheck = Acc2.getBalance();
					cout << "Enter amount you wish to deposit:";
					cin >> amount;
					Acc2.deposit(amount);
					if (Acc2.getBalance() >= depcheck) {
						check = true;
					}
				}
				cout << Acc2.getOwner() << "`s balance now is " << Acc2.getBalance() << "$\n";
				check = false;
			}
			else if (action == 2) {
				while (check == false) {
					double withcheck;
					withcheck = Acc2.getBalance();
					cout << "Enter amount you wish to withdraw:";
					cin >> amount;
					Acc2.withdraw(amount);
					if (Acc2.getBalance() <= withcheck) {
						check = true;
					}
				}
				cout << Acc2.getOwner() << "`s balance now is " << Acc2.getBalance() << "$\n";
				check = false;
			}
			else if (action == 3) {
				cout << "Bye\n";
			}
		}
		else if (AccActive == 3) {
			cout << "Bye\n";
			run = false;
		}
		else {
			cout << "Make a correct choise\n";
		}
		cout << "Wish to continue?(y/n)\n";
		cin >> keepGoing;
		if (keepGoing == 'n') {
			run = false;
		}
	}
	
	return 0;
}
int ActionChoise() {
	int action;
	cout << "Select what you want to do\n";
	cout << "1.Deposit\n";
	cout << "2.Withdraw\n";
	cout << "3.Quit\n";
	cin >> action;
	return action;
}