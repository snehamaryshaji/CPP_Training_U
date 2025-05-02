
/*problem 3
count the number of elements to its right are smaller than the current element
*/
#include<iostream>
#define MAX 100
using namespace std;
void occurance(int arr[],int size)
{
	for (int i = 0;i < size;i++)
	{
		int count = 0;
		for (int j = i + 1;j < size;j++)
		{
			if (arr[j] < arr[i])
			{
				count++;
			}	
		}
		cout << count << " ";
	}
}
int main()
{
	int n;
	int arr[MAX];
	cout << "enter the number of elements" << endl;
	cin >> n;
	cout << "enter " << n << " elements" << endl;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	occurance(arr, n);
	return 0;
}