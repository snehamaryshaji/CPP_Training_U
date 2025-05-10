/*check the number prime or not
*/
#include<iostream>
using namespace std;
bool check_prime(int number);
int main()
{
	int number;
	cin >> number;
	if (check_prime(number))
		cout << number << " is prime";
	else
		cout << number << " is not prime";

	return 0;
}
bool check_prime(int number)
{
	for (int i = 1;i < number / 2;i++)
	{
		if (number % i != 0)
			return false;
	}
	return true;
}