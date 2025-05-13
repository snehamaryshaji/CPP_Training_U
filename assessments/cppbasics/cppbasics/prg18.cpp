/*check the number is aan armstrong or not
*/
#include<iostream>
#include<cmath>
using namespace std;
bool check_armstrong(int number);
int main()
{
	int number;
	cin >> number;
	if (check_armstrong(number))
		cout << number << " is armstrong";
	else
		cout << number << " is not an armstrong";
	return 0;
}
bool check_armstrong(int number)
{
	int temp = number;
	int digit = 0;
	while (temp)
	{
		digit++;
		temp = temp / 10;
	}
	temp = number;
	int sum = 0;
	while (temp)
	{
		int rem = temp % 10;
		sum = sum + pow(rem, digit);
		temp = temp / 10;
	}
	if (sum == number)
		return true;
	else
		return false;
}