
/*
* problem  6
* reverse all sub arrays
*/
#include<iostream>
#define MAX 200
using namespace std;
void reverse(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
int main()
{
	int n;
	int k=0;
	int arr[MAX];
	cout << "enter n value";
	cin >> n;
	cout << "enter  " << n << "elements" << endl;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	cout << "enter k value"<<endl;
	cin >> k;
	for (int i = 0;i < n;i += k)
	{
		int end = (i + k - 1 < n) ? i + k - 1 : n - 1;
		reverse(arr, i, end);
	}
	for (int i = 0;i < n;i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}