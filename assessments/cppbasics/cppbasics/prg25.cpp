/*check the given string is pallindrome or not*/
#include<iostream>
using namespace std;
int palindrome(char arr[]);
int main()
{
	char arr[100];
	cin.getline(arr, 100);
	if (palindrome(arr))
	{
		cout << "pallindrome";
	}
	else
	{
		cout << "not pallindrome";
	}
	return 0;
}
int palindrome(char arr[])
{
	int end = 0;
	int first = 0;
	while (arr[end])
	{
		end++;
	}
	end--;
	while (first < end)
	{
		if (arr[first] != arr[end])
		{
			return 0;
		}
		first++;
		end--;
	}
	return 1;
}