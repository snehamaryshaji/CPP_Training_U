#include<iostream>
using namespace std;
bool is_prime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;

	for (int i = 2;i <= num/2 ;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
}
int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	bool ret=is_prime(num);
	if (ret == true)
		cout << "number is prime" << endl;
	else
		cout << "number is not prime" << endl;


	return 0;
}