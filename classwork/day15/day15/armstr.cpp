#include<iostream>
using namespace std;
bool check_arm(int num)
{
	int temp = num;
	int digit = 0;
	while (num != 0)
	{
		digit++;
		num = num / 10;
	}
	int sum = 0;
	int a_num = temp;
	while (temp != 0)
	{
		int rem = num % 10;

		sum = sum + pow(rem, digit);
		num = num / 10;

	}
	if (sum == a_num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void arm(int n)
{
	for (int i = 1;i <= n;i++)
	{
		int res = check_arm(i);
		if (res)
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
	arm(n);
}