/*write a program to print reverse string*/
#include<iostream>
using namespace std;
void reverse(char str[]);
int main()
{
	char str[100];
	cin.getline(str, 100);
	reverse(str);
	return 0;
}
void reverse(char str[])
{
	int first = 0;
	int end = 0;
	while (str[end])
	{
		end++;
	}
	end--;
	while (first < end)
	{
		char temp = str[first];
		str[first] = str[end];
		str[end] = temp;
		first++;
		end--;
	}
	cout << str;
}