#include<iostream>
using namespace std;
int main()
{
	int num;
	int ret = 0;
	int count = 0;
	int odd = 1;
		int even = 1;
	cout << "enter a number" << endl;
	cin >> num;
	while(num!=0)
	{
		ret = num % 10;
		count++;
		if ((count % 2) != 0)
		{
			 odd = odd * ret;
		}
		else
		{
			even = even * ret;
		}
		num = num / 10;
	}
	if(odd==even)
	{
		cout << "odd=" << odd << "even" << even;
	}
	else
	{
		cout << "odd=" << odd << "even" << even;
	}
	return 0;
}