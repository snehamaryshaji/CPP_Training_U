#include<iostream>
using namespace std;
int result(int num)
{
	int sum = 0;
	for (int i = 1;i <=num;i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int num;
	cin >> num;
	cout<<"sum= "<<result(num);
	return 0;

}