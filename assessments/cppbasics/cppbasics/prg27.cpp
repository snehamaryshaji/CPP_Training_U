/*diamond pattern*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			cout << " ";
		}
		//cout << endl;

		for (int l = 0;l < n - i;l++)
		{
			cout << "* ";
		}
		cout << endl;

	}
	for (int i = 1;i < n;i++)
	{
		for (int j = 0;j <= n - i - 1;j++)
		{
			cout << " ";
		}
		//cout << endl;

		for (int l = 0;l <= i;l++)
		{
			cout << "* ";
		}
		cout << endl;

	}
	return 0;
}