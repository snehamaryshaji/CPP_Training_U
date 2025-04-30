#include<iostream>
#define ROW 3
#define COL 3
using namespace std;
int main()
{
	//int arr[ROW][COL];
	//int arr[ROW][COL] = { { 1,2,3 }, { 4,8,9 }, { 4,9,7 } };
	int arr[ROW][COL] = { 1,2,3,4,5,6,7.,8,9 };
	int count = 0;
	for (int i = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			cout<<"address of arr ["<<count++<<"] " << (unsigned long int) & arr[i][j] << " value= " << arr[i][j] << endl;
		}
	}
	int arr1[ROW][COL];
	cout << "enter the arr1 values" << endl;
	for (int i = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			cin >> arr1[i][j];
		}
	}
	for (int i = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			cout << "address of arr1 [" << count++ << "] " << (unsigned long int) & arr1[i][j] << " value= " << arr1[i][j] << endl;
		}
	}
	//int arr2[ROW][COL]={0} //only 1st element is filled with 0
		//bzero or memset or explicitly declare with 0
	return 0;
}