#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int sum1 = 0;
	int sum2 = 0;
	int dig1 = 0;
	int dig2 = 0;
	cout << "enter n1,n2" << endl;
	cin >> n1 >> n2;
	while (n1 > 0)
	{
		dig1 = n1 % 10;
		if (arr1[dig1] == 0)
		{
			arr1[dig1] = dig1;
		}
		else
		{
			arr1[dig1] = 1;
		}
		n1 = n1 / 10;
	}
	for (int i = 0;i < 10;i++)
	{
		if (arr1[i] != 1)
		{
			sum1 = sum1 + arr1[i];
		}
	}
	while (n2 != 0)
	{
		dig2 = n2 % 10;
		if (arr2[dig2] == 0)
		{
			arr2[dig2] = dig2;
		}
		else
		{
			arr2[dig2] = 1;
		}
		n2 = n2 / 10;
	}
	for (int i = 0;i < 10;i++)
	{
		if (arr2[i] != 1)
		{
			sum2 = sum2 + arr2[i];
		}
	}
	if (sum1 == sum2)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	//cout << "sum1=" << sum1 << "sum2=" << sum2;


	return 0;
}