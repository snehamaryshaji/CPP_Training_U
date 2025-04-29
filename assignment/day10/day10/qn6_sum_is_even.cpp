#include<iostream>
using namespace std;
bool check_even(int num1, int num2)
{
	int sum = num1 + num2;
	if (sum % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int num1, num2;
	cout << "enter two numbers" << endl;
	cin >> num1 >> num2;
	if (check_even(num1, num2))
	{
		cout << "the sum is even" << endl;
	}
	else
	{
		cout << "the sum is odd" << endl;
	}
	return 0;
}