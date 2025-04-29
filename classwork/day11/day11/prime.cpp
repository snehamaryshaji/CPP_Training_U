#include<iostream>
#define MAX 100
using namespace std;
bool is_prime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;

	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
}
int main()
{
	int num;
	cout << "enter the n value" << endl;
	cin >> num;
	int arr[MAX];
	int j = 0;
	for (int i = 0;i < num;i++)
	{
		int res = is_prime(i);
			if(res == 1)
			{
				arr[j] = i;
				j++;
			}
	}
	cout << "the values are" << endl;
	for (int i = 0;i < num;i++)
	{
		cout << arr[i] << endl;
	}
	for (int i = 0;i < j;i++)
	{
		for (int k = i;k < j;k++)
		{
			if (arr[i] + arr[k] == num)
			{
				cout << arr[i] << "+" << arr[k]<<"=" << num << endl;
			}
		}
	}
	return 0;
}