#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 3,4,3,5,9 };
	int n = sizeof(arr) / sizeof(arr[1]);
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < n;)
		{
			if (arr[i] == arr[j])
			{
				for (int k = j;k < n - 1;k++)
				{
					arr[k] = arr[k+1];
				}
				n--;
			}
			else
			{
				j++;//no dupicate in nxt element
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}