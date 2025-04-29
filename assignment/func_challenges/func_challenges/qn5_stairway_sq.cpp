#include<iostream>
using namespace std;
int sum(int n)
{
	if (n == 0)
		return 0;
	return (n * n) + sum(n - 1);
}
int main()
{
	int n;
	cout << "enter the number of steps" << endl;
	cin >> n;
	cout << "sum of squares= " << sum(n) << endl;
	return 0;
}