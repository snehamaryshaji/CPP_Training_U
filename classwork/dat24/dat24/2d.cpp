#include<iostream>
using namespace std;
int main()
{
	int** arr = nullptr;
	int row = 3, col = 4;
	arr = (int**)malloc(sizeof(int*) * row);
	//for each row allocate my for col
	for (int i = 0;i < row;i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * col);//allocate col my
	}
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}