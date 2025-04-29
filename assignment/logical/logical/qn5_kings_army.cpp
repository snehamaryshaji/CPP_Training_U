#include<iostream>
using namespace std;
int perfect_num(int num)
{
	int sum = 0;
	for (int i = 1;i <=num/2;i++)
	{
		if (num % i == 0)
			sum = sum + i;
	}
	return sum;
}
int main()
{
	int num;
	cout << "enter the number" << endl;
	cin >> num;
	if (perfect_num(num) == num)
		cout << "given army number is perfect" << endl;
	else
		cout << "given army number is not perfect" << endl;
	return 0;
}