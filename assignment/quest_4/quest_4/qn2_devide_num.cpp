#include<iostream>
using namespace std;
int main()
{
	int n;
	int count = 0;
	cout << "enter the number" << endl;
	cin >> n;
	for (int i = 1;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			for (int k = j;k < n;k++)
			{
				for (int l = k;l < n;l++)
				{
					if (i + j + k + l == n)
					{
						cout << i << "+" << j << "+" << k << "+" << l << "=" << n << endl;
						count++;
					}
				}
			}
		}
	}
	if (count == 0)
	{
		cout << "not possible" << endl;
	}
	return 0;
}