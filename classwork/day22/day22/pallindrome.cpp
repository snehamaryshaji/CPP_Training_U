#include<iostream>
using namespace std;
int reverse(char* str)
{
	char* first = str;
	char* end = str;
	while (*end)
	{
		end++;

	}
	end--;
	while (first < end)
	{
		if (*first != *end)
		{
			return 0;
		}
		first++;
		end--;
	}
	return 1;

}
int main()
{
	char str[100];
	cin.getline(str, 100);
	if (reverse(str))
	{
		cout << "pallindrome" << endl;
	}
	else
	{
		cout << "not pallindrome" << endl;
	}
	return 0;
}