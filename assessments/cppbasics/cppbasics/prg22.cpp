/*find the smallest and largest element in an array*/
#include<iostream>
using namespace std;
void small(int arr[],int n);
void large(int arr[], int n);
int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	small(arr,n);
	large(arr, n);
	return 0;
}
void small(int arr[],int n)
{
	int small = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (small >= arr[i])
		{
			small = arr[i];
		}
	}
	cout <<"small- "<< small<<endl;
}
void large(int arr[], int n)
{
	int large = arr[0];
	for (int i = 0;i < n;i++)
	{
		if (large <= arr[i])
		{
			large = arr[i];
		}
	}
	cout <<"large- " <<large;
}