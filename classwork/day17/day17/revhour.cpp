#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i <= n;i++)//row
	{
		for (int j= 0;j <=i;j++)//star
		{
			cout << "* ";
		}
		for (int k = 0;k <= (2*n)-(2*i);k++)//space
		{
			cout << "  ";
		}
		for (int j = 0;j <= i;j++)//star
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = n-1;i >= 0;i--)//row
	{
		for (int j = 0;j <= i;j++)//star
		{
			cout << "* ";
		}
		for (int k = 0;k <= (2 * n) - (2 * i);k++)//space
		{
			cout << "  ";
		}
		for (int j = 0;j <= i;j++)//star
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}