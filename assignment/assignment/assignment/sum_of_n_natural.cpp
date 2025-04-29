#include<iostream>
using namespace std;
int sum(int n);
int main()
{
	int n;
	cout << "enter n value" << endl;
	cin >> n;
	int ret = sum(n);
	cout << "sum of n natural numbers=" << ret << endl;
}
int sum(int n)
{
	if (n == 1)
		return 1;
	int num = n + sum(n - 1);
	return num;
}