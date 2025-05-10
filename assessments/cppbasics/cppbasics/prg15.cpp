/*write a program to find leep year or not
*/
#include<iostream>
using namespace std;
int main()
{
	int year;
	cin >> year;
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		cout << year << " is leap year";
	else
		cout<<year <<" is not leap year";
	return 0;
}