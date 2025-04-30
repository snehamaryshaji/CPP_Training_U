#include<iostream>
using namespace std;
int string_len(char arr[])
{
	int i = 0;
	int count = 0;
	while (arr[i])
	{
		i++;
		count++;
	}
	return count;
}
int main()
{
	char arr[20];
	int res;
	cout << "enter the name" << endl;
	cin.getline(arr, 100);
	res = string_len(arr);
	cout << "string length=" << res << endl;

	return 0;
}