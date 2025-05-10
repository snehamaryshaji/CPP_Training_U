/*check the number prime or not
*/
#include<iostream>
using namespace std;
int check_prime(int number);
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
int check_prime(int number)
{
	for (int i = 2;i*i <= number;i++)
	{
		if (number % i == 0)
			return 0;
	}
	return 1;
}