#include<iostream>
using namespace std;
void fun(int arr[], int n)
{
	int i = 0;
	int j = n - 1;
	while (i <= j)
	{
		if (arr[i] == arr[j])
		{
			i++;
			j--;
		}
		else
		{
			cout << "its not a pallindrome";
			return;
		}
	}
	cout << "its a pallindrome";
}
int main()
{
	int arr[100];
	int n;
	cout << "enter the size" << endl;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	fun(arr,n);
	return 0;
}