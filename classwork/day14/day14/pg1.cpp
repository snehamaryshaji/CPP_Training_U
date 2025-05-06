#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a;
	cin >> b;
	cin>> c>>d>>e;
	/*if ((a > b) && (a > c))
	{
		cout << a << " is grater" << endl;
	}
	else if((b > a) && (b > c))
	{
		cout << b << " is grater" << endl;
	}
	else
	{
		cout << c << " is grater" << endl;
	}*/
	if (a > b )
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a < e)
				{
					cout << a << " is greater";
				}
				else
				{
					cout << e << " is greater";
				}
			}
			else
			{
				if (d > e)
				{
					cout << d << " is grater";
				}
				else
				{
					cout << e << " is greater";
				}
			}
		}
		else
		{
			if (c > a)
			{
				cout << c << " is greater";
			}
			else
			{
				cout << a << " is greater";
			}
		}
	}
	else
	{
		if (b > c)
		{
			if (b > d)
			{
				cout << b << " is greater";
			}
			else
			{
				if (d > e)
				{
					cout << d << " is greater";
				}
				else
				{
					cout<<e<<"is"
				}
			}
		}
		else
		{
			if (c > d)
			{
				cout << c << " is greater";
			}
			else
			{
				cout << d << " greter";
			}
		}
	}
	return 0;
}
