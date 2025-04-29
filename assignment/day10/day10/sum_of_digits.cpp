#include<iostream>
using namespace std;
int add(int n)
{
	if (n < 10)
	{
		return n;
	}
	int sum = n % 10 + add(n / 10);
	return add(sum);
}
int main()
{
	int num;
	cout << "enter an intiger" << endl;
	cin >> num;
	int add(num);
	return 0;
}