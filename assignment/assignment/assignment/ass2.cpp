#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter a positive intiger" << endl;
	cin >> n;
	int sum = 0;
	int mul = 1;
	while (n != 0)
	{
		int ret = n % 10;
		n = n / 10;
		sum = sum + ret;
		if (ret != 0)
		{
			mul = mul * ret;
		}
	}
	cout << "sum=" << sum << endl;
	cout << "product" << mul << endl;
	return 0;
}