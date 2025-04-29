#include<iostream>
using namespace std;
int odd_coin(int coin)
{
	int sum = 0;
	while (coin)
	{
		int dig = coin % 10;
		if (dig % 2 != 0)
		{
			sum = sum + dig;
		}
		coin = coin / 10;
	}
	return sum;
}
int main()
{
	int coin;
	cout << "enter the total coin count" << endl;
	cin >> coin;
	cout << "your prize is " << odd_coin(coin) << endl;
	return 0;
}