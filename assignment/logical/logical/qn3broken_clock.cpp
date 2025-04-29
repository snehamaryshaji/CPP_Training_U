#include<iostream>
using namespace std;
void magic_clock(int hour)
{
	for (int i = 1;i <= 60;i++)
	{
		if (i % hour == 0)
		{
			cout << "clock rings at " << i << endl;
		}
	}
}
int main()
{
	int hour;
	cout << "enter the hour and minute value" << endl;
	cin >> hour;
	magic_clock(hour);
	return 0;
}