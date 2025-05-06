#include<iostream>
using namespace std;
int fun(int num)
{
	int rev = 0;
	while (num)
	{
		int rem= num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	return rev;
}
int main()
{
	int num;
	cin >> num;
	if (num == fun(num))
	{
		cout << "number is pallindrome" << endl;
	}
	else
	{
		cout << "number is not pallindrome" << endl;
	}
	return 0;
}