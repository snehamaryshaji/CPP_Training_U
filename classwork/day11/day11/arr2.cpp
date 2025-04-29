#include<iostream>
using namespace std;
int main()
{
	int arr[3] = { 10,20,30 };//declaration with initiaization
	for (int i = 0;i < 3;i++)
	{
		cout << "arr["<<i<<"] "<< arr[i] << endl;
	}
	arr[0] = 20;
	arr[1] = arr[0] * 20;
	for (int i = 0;i < 3;i++)
	{
		cout << "arr[" << i << "] " << arr[i] << endl;
	}
	return 0;
}