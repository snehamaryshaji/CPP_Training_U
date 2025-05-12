//check the given number present or not

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
	int var;
	cin >> var;
	int found = 0;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] == var)
		{
			found = 1;
			break;
		}
	}
	if (found)
		cout << "element found";
	else
		cout << "element not found";
	return 0;
}