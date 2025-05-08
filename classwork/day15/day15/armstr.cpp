#include<iostream>
using namespace std;
bool check_arm(int num)
{
	int temp = num;
	int digit = 0;
	while (temp != 0)
	{
		digit++;
		temp = temp / 10;
	}
	int sum = 0;
	temp = num;
	while (temp != 0)
	{
		int rem = temp % 10;

		sum = sum + pow(rem, digit);
		temp = temp / 10;

	}
	if (sum == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void get_digits(int n)
{
	for (int i = 1;i <= n;i++)
	{
		if (check_arm(i))
		{
			cout << i << endl;
		}
	}
}
int main()
{
	int n;
	cout << "enter the limit" << endl;
	cin >> n;
	get_digits(n);
}