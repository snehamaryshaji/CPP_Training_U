#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 2,4,1,8,9 };
	int n = sizeof(arr) / sizeof(arr[1]);
	int t;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (arr[j] < arr[j+ 1])
			{
				t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;

			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
	cout << arr[n - 2] << endl;
	return 0;
}