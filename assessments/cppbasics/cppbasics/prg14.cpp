/*factorial of a number using loop
*/
#include<iostream>
using namespace std;
int factorial(int num);
int main()
{
	int num;
	cin >> num;
	if (num >= 0)
	{
		cout << factorial(num);
	}
	else
	{
		cout << "enter positive value";
	}
	return 0;
}
int factorial(int num)
{
	int fact = 1;
	for (int i = 1;i <=num;i++)
	{
		fact = fact * i;
	}
	return fact;
}