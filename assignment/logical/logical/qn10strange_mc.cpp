#include<iostream>
using namespace std;
void press(int n)
{
	int num;
	int sum = 0;
	for (int i = 1;i <= n;i++)
	{
		num = i * 2;
		cout << "num= " << num << endl;
		sum = sum + num;
	}
	cout << "sum of the numbers = " << sum << endl;
}
int main()
{
	int n;
	cout << "enter the num and n value" << endl;
	cin >>n;
	press(n);
	return 0;
}