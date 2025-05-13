#include "main.h"
bool view()
{
	char option;
	cout << "1.day" << endl;
	cout << "2.week" << endl;
	cout << "3.sum" << endl;
	cout << "enter which option you want to see" << endl;
	cin >> option;
	if (option == 1)
	{
		int day;
		cout << "enter the day " << endl;
		cin >> day;
		display(day);

	}
	else if(option==2)
	{
		cout << "enter strart date and end date" << endl;
		int start_date, end_date;
		cin >> start_date >> end_date;
		for (int i = start_date;i <= end_date;i++)
		{
			display(i);
		}

	}
	else
	{

	}
	}

	void display(int day)
	{
		int day;
		cout << "enter the day " << endl;
		cin >> day;
		int* dayArray = monthArray[day - 1];
		int i = 0;
		while (dayArray != NULL)
		{
			cout << food[i] << " - " << dayArray[i] << endl;
			i++;
		}
	}
	
