
/* problem 4
find the equilibrium position
*/
#include<iostream>
#define MAX 10
using namespace std;
int check_equlibrium(int arr[], int n)
{
	int total_sum = 0;
	for (int i = 0;i < n;i++)
	{
		total_sum = total_sum + arr[i];
	}
	int left = 0;
	for (int i = 0;i < n;i++)
	{
		if (left == total_sum - left - arr[i])
		{
			cout << i;
			return 0;
		}
		left += arr[i];
	}
	cout << "-1";
	}
	
int main()
{
	int arr[MAX];
	int n;
	cout << "enter the size of the array" << endl;
	cin >> n;
	cout << "enter the " << n << " elements" << endl;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	check_equlibrium(arr, n);
	return 0;
}