#include<iostream>
using namespace std;
int main()
{
	char str[100];
	cin >> str;
	int sum = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] <= 48 && str[i] >= 57)
		{
			int num = str[i] - 48;
			sum = sum + num;
		}
	}
	cout << sum;
		return 0;
}