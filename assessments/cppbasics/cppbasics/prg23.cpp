//second smallest element in an array
#include<iostream>
using namespace std;
int sec_small(int arr[], int n)
{
	int small, sec_small;
	if (arr[0] < arr[1])
	{
		small = arr[0];
		sec_small = arr[1];
	}
	else
	{
		small = arr[1];
		sec_small = arr[0];
	}
	for (int i = 2;i < n;i++)
	{
		if (arr[i] < small)
		{
			sec_small = small;
			small = arr[i];
		}
		else if (arr[i] < sec_small && arr[i] != small)
		{
			sec_small = arr[i];
		}
	}
	return sec_small;
}
int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	cout<<sec_small(arr, n);
	return 0;
}