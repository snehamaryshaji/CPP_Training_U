#include "user.h"
#include<fstream>
int main()
{
	char option = 1;
	while (option)
	{
		cout << "enter the choice" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			signup();
			break;
		case 2:
			login();
			break;
		case 3:
			cout<<"exitinh........."
			option = 0;
		}
	}
	return 0;
}