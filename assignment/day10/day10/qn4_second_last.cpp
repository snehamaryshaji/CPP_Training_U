#include<iostream>
using namespace std;
int find_second(int num1)
{
	int count = 0;
	int temp = num1;
	while (temp != 0)
	{
		count++;
		temp=temp / 10;
	}
	for (int i = 0;i < count-2;i++)
	{
		num1=num1 / 10;
	}
	return num1 % 10;
}
int main()
{
	int num1;
	cout << "enter two numbers" << endl;
	cin >> num1;
	int res=find_second(num1);
	cout << "second last digit " << res << endl;
	return 0;
}