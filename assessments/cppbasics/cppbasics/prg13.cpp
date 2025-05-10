/*write a program to find the sum of n natural numbers
*/
#include<iostream>
using namespace std;
int sum_of_num(int n);
int main()
{
	int n;
	cin >> n;
	cout<<sum_of_num(n);
	return 0;
}
int sum_of_num(int n)
{
	int sum = 0;
	for (int i = 1;i <= n;i++)
	{
		sum = sum + i;
	}
	return sum;
}