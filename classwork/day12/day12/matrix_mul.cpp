#include<iostream>
#define ROW1 2
#define COL1 2
#define ROW2 2
#define COL2 2
using namespace std;
int main()
{
	int arr1[ROW1][COL1];
	int arr2[ROW2][COL2];
	cout << "enter the arr1 values" << endl;
	for (int i = 0;i < ROW1;i++)
	{
		for (int j = 0;j < COL1;j++)
		{
			cin >> arr1[i][j];
		}
	}
	cout << "enter the arr2 values" << endl;
	for (int i = 0;i < ROW2;i++)
	{
		for (int j = 0;j < COL2;j++)
		{
			cin >> arr2[i][j];
		}
	}
	int sum = 0;
	int output[ROW1][COL2];
	if (COL1 == ROW2)
	{
		for (int i = 0;i < ROW1; i++)
		{
			for (int j = 0;j < COL2;j++)
			{
				output[i][j] = 0;
				for (int k = 0;k < COL1;k++) //c1 is same for both arr1 and arr2
				{
					output[i][j] += arr1[i][k] * arr2[k][j];
				}
			}
		}
		int count = 0;
		for (int i = 0;i < 2;i++)
		{
			for (int j = 0;j < 2;j++)
			{
				cout << "output [" << count++ << "] " << " value= " << output[i][j] << endl;
			}
		}
	}
	else {
		cout << "multiplication is not possible" << endl;
	}
	return 0;
}