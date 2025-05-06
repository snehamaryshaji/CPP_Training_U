#include<iostream>
using namespace std;
int fun(int n)
{
	int fact = 1;
	for (int i = 1;i <= n;i++)
	{
		fact=fact * i;
	}
	return fact;
}
int main()
	{
	int n;
	cin >> n;
	if (n < 0)
	{
		cout << "enter positive intiger" << endl;
	}
	else
	{
		cout << "factorial= " << fun(n);
	}
		return 0;
	}
