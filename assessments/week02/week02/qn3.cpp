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
	int digit = 0;
	while (num != 0)
	{
		digit++;
		num = num / 10;
	}
	num = actual_num;
	while (num != 0)
	{
		int rem = num % 10;

		sum =sum+pow(rem,digit);
		num = num / 10;

	}
	cout << sum << endl;
	
	/*int power = 1;
	while (num != 0)
	{
		int rem = num % 10;
		for (int i = 0;i < digit;i++)
		{
			power = power * rem;
		}
		sum = sum + power;
		num = num / 10;
	}
	cout << sum << endl;
	cout << digit << endl;
	*/
	if (actual_num == sum)
	
		cout << "the number is amgstrom" << endl;
	
	else
	
		cout<<"number is not amgstrom";
	

	return 0;
}