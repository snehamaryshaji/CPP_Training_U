/*
* problem 3
* check for armgstrom number
*/
#include<iostream>
using namespace std;
int main()
{
	int actual_num;
	cout << "enter a number" << endl;
	cin >> actual_num;
	int sum = 0;
	int num = actual_num;
	while(num!=0)
	{
		int rem = num % 10;
		rem= rem * rem * rem;
		sum = sum + rem;
		num = num / 10;

	}
	if (actual_num == sum)
	{
		cout << "the number is amgstrom" << endl;
	}
	else
	{
		cout<<"number is not amgstrom";
	}

	return 0;
}