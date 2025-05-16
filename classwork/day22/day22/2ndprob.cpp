#include<iostream>
using namespace std;
int sum(int* ptr,int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++,ptr++)
	{
		sum += *ptr;
	}
	return sum;
}
int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin>>arr[i];
	}

	cout << sum(arr, n);
	return 0;
}