#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	int a, b;
	cin >> num1 >> num2;
	if (num1 < num2)
	{
		a = num2;
		b = num1;
	}
	else
	{
		a = num1;
		b = num2;
	}
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << a;

	return 0;
}