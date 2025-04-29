#include<iostream>
using namespace std;
bool find_leep(int year)
{
	if (year % 4 == 0 && year%100!=0 || (year%400==0))
	{
		return true;
	}
	else
	{
		return false;
	}

}
int main()
{
	int year;
	cout << "enter the year" << endl;
	cin >> year;
	if (find_leep(year))
		cout << "the year is leap year" << endl;
	else
		cout << "the year is not leap year" << endl;

	return 0;
}