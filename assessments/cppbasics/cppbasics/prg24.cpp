/*calculate the sum of elements in an array*/
#include<iostream>
using namespace std;
void small(int arr[], int n);
void large(int arr[], int n);
int main()
{
	int arr[100];
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	cout << sum;
	return 0;
}