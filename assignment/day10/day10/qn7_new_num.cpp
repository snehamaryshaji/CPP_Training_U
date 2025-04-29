#include<iostream>
using namespace std;
int first_digit(int num2)
{
	int rem;
	while (num2)
	{
		rem = num2 % 10;
		num2 = num2 / 10;
	}
	return rem;
}
int main()
{
	int num1,num2;
	cout << "enter num1 and num2" << endl;
	cin >> num1 >> num2;
	int res1 = num1 % 10;
	int res2 = first_digit(num2);
	cout << "solution= " << res1 * 10 + res2;
	return 0;
}