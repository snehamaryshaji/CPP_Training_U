#include<iostream>
using namespace std;
void hour_convertion(int hour)
{
	int min = hour * 60;
	cout << "hour to min= " << min << endl;
	cout << "min to seconds= " << min * 60 << endl;
}
int main()
{
	int hour;
	cout << "enter the hour" << endl;
	cin >> hour;
	hour_convertion(hour);
	return 0;
}