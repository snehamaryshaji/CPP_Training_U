//remove duplicates in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;)
		{
			if (arr[i] == arr[j])
			{
				for (int k = j;k < n - 1;k++)
				{
					arr[k] = arr[k + 1];
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