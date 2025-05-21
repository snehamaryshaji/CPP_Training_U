#include<iostream>
using namespace std;
class atm
{
	int balance;
	string account_holder;
public:
	atm()//constructor
	{
		balance = 50000;
		account_holder = "snehamary";
	}
	int check_balance();
	void deposit(int amt);
	void withdraw(int amt);
};
int atm::check_balance()
{
	cout << "account balance" << endl;
	cout << balance << endl;
	return balance;
}
void atm::deposit(int amt)
{
	balance = balance + amt;
	cout << amt << " added successfully" << endl;
}
void atm::withdraw(int amt)
{
	balance = balance - amt;
	if (amt <= balance)
	{
		cout << amt << " amount successfully deducted" << endl;
	}
	else {
		cout << "insufficient balance" << endl;
	}

}
int main()
{
	atm s;
		int option=0;
		do {

			cout << "1.check balance\n2.deposit\n3.withdraw\n4.exit\n";
			cin >> option;
			switch (option)
			{
			case 1:
				s.check_balance();
				break;
			case 2:
				int amt;
				cout << "enter the amount you want to add" << endl;
				cin >> amt;
				s.deposit(amt);
				break;
			case 3:
				int amut;
				cout << "enter the amount you want " << endl;
				cin >> amut;
				s.withdraw(amut);
				break;
			case 4:
				cout << "exiting...." << endl;
				break;
			default:
				cout << "invalid option" << endl;

			}
		} while (option != 4);
		return 0;
}