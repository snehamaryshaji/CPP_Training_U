/*make an array and check the given value present or not*/
#include<iostream>
#define CAP 10
using namespace std;
int main()
{
	int arr[CAP] = { 0 };
	cout << "enter the "<< CAP <<" values" << endl;
	for (int i = 0;i < 10;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0;i < 10;i++)
	{
		cout << "arr[" << i << "] " << arr[i] << endl;
	}
	int num;
	cout << "enter the element" << endl;
	cin >> num;
	for (int i = 0;i < 10;i++)
	{
		if (arr[i]==num)
		{
			//cout << "element is found" << endl;	
			cout << "element is found= arr[" << i << "] " << arr[i] << endl;
		}
	}
	return 0;
}