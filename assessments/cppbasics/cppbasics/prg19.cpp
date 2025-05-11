#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << "0";
	}
	else if (n == 1)
	{
		cout << "1";
	}
	else
	{
		int a = 0;
		int b = 1;
		int c;
		for (int i = 2;i <= n;i++)
		{
			c = a + b;
			a = b;
			b = c;

		}
		cout << b;
	}
	return 0;
}