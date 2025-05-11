/*count the numbers in a string*/
#include<iostream>
using namespace std;
int sum_of_numbers(char num[]);
int main()
{
	char numbers[100];
	cin.getline(numbers,100);
	cout<<sum_of_numbers(numbers);

	return 0;
}
int sum_of_numbers(char num[])
{
	int i = 0;
	int sum = 0;
	while (num[i])
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			sum = sum + num[i] - 48;
		}
			i++;
	}
	return sum;
}