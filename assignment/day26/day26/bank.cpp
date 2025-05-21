#include<iostream>
using namespace std;
class atm
{
	int balance;
	string account_holder;
public:
	void setBalance();
	void check_balance();
	void deposit();
	void withdraw();
};
void atm:: setBalance()
{
	balance = 50000;

}
void atm::check_balance()
{
	cout << "account balance" << endl;
	cout << balance << endl;
}
void atm::deposit()
{
	int amt;
	cout << "enter the amount you want to add" << endl;
	cin >> amt;
	balance = balance + amt;
	cout << amt << " added successfully" << endl;
}
void atm::withdraw()
{
	int amt;
	cout << "enter the amount you want " << endl;
	cin >> amt;
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
	s.setBalance();
		int option=0;
		do {

			cout << "1.check balance\n2.deposit\n3.withdraw\n";
			cin >> option;
			switch (option)
			{
			case 1:
				s.check_balance();
				break;
			case 2:
				s.deposit();
				break;
			case 3:
				s.withdraw();
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