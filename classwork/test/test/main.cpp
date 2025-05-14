#include "main.h"
int main()
{
	initializeExpecnce();
	int opt = 0;
	do
	{
		cout << "n1.add expense\n2.view expence\3.view expense month\n.4 exit\n";
		cout << "enter option: " << endl;
		cin >> opt;
		int month, day, mealtype, amount;
		switch (opt)
		{
		case 1:
			cout << "enter month,day,meal type,amount ";
			cin >> month >> day >> mealtype >> amount;
			addExpence(month, day, mealtype, amount);
			break;
		case 2:
				cout << "enter month,day";
				cin >> month >> day;
				displayDay(month, day);
				break;
		case 3:
			cout << "ente month" << endl;
			displayMonth(month);

		case 4:
				cout << "program ended";
				break;
		default:
				cout << "invalid option\n";
		}
	}

		while (opt != 4);
	return 0;
}