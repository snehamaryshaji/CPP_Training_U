/*#ifdef __INTELLISENSE__   //problem 5 findthe leaders
#pragma diag_suppress 28
#endif
*/
#include<iostream>
#define MAXM 40
using namespace std;
void leader(int arr[], int size)
{
	int leaders[MAXM];
	int count = 0;
	int max = arr[size - 1];
	//leaders[count++] = max;
	cout << max << " ";
	for (int i = size - 2;i >= 0;i--)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
			//leaders[count++] = arr[i];
			cout << arr[i]<<" ";
		}
	}
	//for (int i = 0;i < count;i++)
	//{
	//	cout << arr[i] << endl;
	//}
}
int main()
{
	int num;
	int arr[MAXM];
	cout << "enter the size of the array" << endl;
	cin >> num;
	//constexpr int size = sizeof(arr) / sizeof(arr[0]);
	cout << "enter" << num << "elements" << endl;
	for (int i = 0;i < num;i++)
	{
		cin >> arr[i];
	}
	/*for (int i = 0;i < num;i++)
	{
		cout << arr[i] << endl;
	}
	*/
	leader(arr,num);
	return 0;
}